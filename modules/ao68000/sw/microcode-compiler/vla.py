#!/usr/bin/env python

# -*- coding: utf-8 -*-

import argparse
import ConfigParser
import json
import logging
import os
import random
import re
import signal
import sys
import urllib2
import urlparse
from subprocess import Popen, PIPE
from tempfile import mkstemp


class SubversionTunnelWrapper(object):
    process = None

    def __init__(self, timeout, repositories_root=None, svn_path=None):
        self.timeout = timeout
        self.stdin = sys.stdin
        self.repositories_root = repositories_root
        self.svn_path = svn_path or 'svnserve'
        self.svn_conf_fd, self.svn_conf_path = mkstemp()
        self.hooks_env_fd, self.hooks_env_path = mkstemp()
        self.read_only = False
        self.create_svn_config()

    def create_svn_config(self):
        content = (
            '[general]\n'
            'hooks-env = {}\n').format(self.hooks_env_path)
        with os.fdopen(self.svn_conf_fd, 'w') as config_file:
            config_file.write(content)

    def create_hooks_env(self):
        content = (
            '[default]\n'
            'LANG = en_US.UTF-8\n')
        if self.read_only:
            content += 'SSH_READ_ONLY = 1\n'
        with os.fdopen(self.hooks_env_fd, 'w') as hooks_env_file:
            hooks_env_file.write(content)

    def remove_configs(self):
        os.remove(self.svn_conf_path)
        os.remove(self.hooks_env_path)

    def start(self):
        config = ['--config-file', self.svn_conf_path]
        command = [self.svn_path, '-t'] + config
        if self.repositories_root:
            command.extend(['-r', self.repositories_root])
        self.process = Popen(command, stdin=PIPE)

    def sync(self):
        while self.process.poll() is None:
            next_byte = self.stdin.read(1)
            if not next_byte:
                break
            self.process.stdin.write(next_byte)
        self.remove_configs()

    @property
    def return_code(self):
        return self.process.returncode

    def get_first_client_response(self):
        signal.signal(signal.SIGALRM, self.interrupt)
        signal.alarm(self.timeout)
        first_response = self._read_first_client_response()
        signal.alarm(0)
        return (
            self._parse_first_client_response(first_response)
            if first_response else None)

    def patch_first_client_response(self, response, **kwargs):
        self.create_hooks_env()
        data = response.copy()
        data.update(kwargs)
        data['url'] = self._svn_string(data['url'])
        data['ra_client'] = self._svn_string(data['ra_client'])
        data['client'] = data['client'] or ''
        buffer_ = (
            "( {version} ( {capabilities} ) {url}{ra_client}"
            "( {client}) ) ".format(**data))
        self.process.stdin.write(buffer_)

    def fail(self, message):
        print(
            "( failure ( ( 210005 {message} 0: 0 ) ) )".format(
                message=self._svn_string(message)))
        self.remove_configs()
        self.process.kill()

    def interrupt(self, signum, frame):
        self.fail("Exited by timeout")

    def _svn_string(self, str_):
        if not str_:
            return ''
        return '{length}:{string} '.format(length=len(str_), string=str_)

    def _read_first_client_response(self):
        buffer_ = ""
        brackets_stack = []
        while True:
            next_byte = self.stdin.read(1)
            buffer_ += next_byte
            if next_byte == "(":
                brackets_stack.append(next_byte)
            elif next_byte == ")":
                brackets_stack.pop()
            elif next_byte == " " and not brackets_stack:
                break
        return buffer_

    def _parse_first_client_response(self, buffer_):
        """
        According to the Subversion RA protocol, the first request
        should look like:

        ( version:number ( cap:word ... ) url:string ? ra-client:string
           ( ? client:string ) )

        Please check https://svn.apache.org/repos/asf/subversion/trunk/
           subversion/libsvn_ra_svn/protocol
        """
        version_re = r'(?P<version>\d+)'
        capabilities_re = r'\(\s(?P<capabilities>[\w\d\-\ ]+)\s\)'
        url_re = r'\d+\:(?P<url>[\W\w]+)'
        ra_client_re = r'(\d+\:(?P<ra_client>[\W\w]+)\s)'
        client_re = r'(\d+\:(?P<client>[\W\w]+)\s)*'
        regex = re.compile(
            r'^\(\s{version}\s{capabilities}\s{url}\s{ra_client}'
            r'\(\s{client}\)\s\)\s*$'.format(
                version=version_re, capabilities=capabilities_re,
                url=url_re, ra_client=ra_client_re, client=client_re))
        matcher = regex.match(buffer_)
        return matcher.groupdict() if matcher else None


class RhodeCodeApiClient(object):
    def __init__(self, config, logger):
        self.api_host = config.get('api', 'host')
        self.api_key = config.get('api', 'key')
        self.logger = logger

    def request(self, method, args):
        id_ = random.randrange(1, 9999)
        args = {
            'id': id_,
            'api_key': self.api_key,
            'method': method,
            'args': args
        }

        req = urllib2.Request(
            '{host}/_admin/api'.format(host=self.api_host),
            data=json.dumps(args),
            headers={'content-type': 'text/plain'})
        ret = urllib2.urlopen(req)
        raw_json = ret.read()
        json_data = json.loads(raw_json)
        id_ret = json_data['id']

        if id_ret != id_:
            raise Exception('something went wrong. '
                            'ID mismatch got %s, expected %s | %s'
                            % (id_ret, id_, raw_json))

        result = json_data['result']
        error = json_data['error']
        return result, error

    def get_user_permissions(self, user):
        result, error = self.request('get_user', {'userid': user})
        if result is None and error:
            raise Exception(
                'User "%s" not found or another error happened: %s!' % (
                    user, error))
        self.logger.debug(
            'User: %s Detected User: %s', user, result.get('username'))
        return result.get('permissions').get('repositories')

    def invalidate_cache(self, repo_name):
        self.logger.debug('Invalidate cache for repo:%s', repo_name)
        return self.request('invalidate_cache', {'repoid': repo_name})


class VcsServer(object):
    def __init__(self, user, user_permissions, config, logger):
        self.user = user
        self.user_permissions = user_permissions
        self.logger = logger
        self.config = config

    def run(self):
        raise NotImplementedError()


class MercurialServer(VcsServer):
    read_only = False

    def __init__(self, repo_name, user, user_permissions, config, logger):
        super(MercurialServer, self).__init__(
            user, user_permissions, config, logger)
        self.repo_name = repo_name

    def run(self):
        self.logger.debug('hg detected. repo: %s', self.repo_name)
        if not self._check_permissions():
            return 2

        exit_code = os.system(self.command)
        return exit_code

    @property
    def command(self):
        root = self.config.get('vcs', 'root')
        hg_path = self.config.get('vcs:hg', 'path')
        arguments = (
            '--config hooks.pretxnchangegroup=\"false\"'
            if self.read_only else '')

        command = (
            "cd {root}; {hg_path} -R {root}{repo_name} serve --stdio"
            " {arguments}".format(
                root=root, hg_path=hg_path, repo_name=self.repo_name,
                arguments=arguments))
        self.logger.debug("Final CMD: %s", command)
        return command

    def _check_permissions(self):
        permission = self.user_permissions.get(self.repo_name)
        if permission is None or permission == 'repository.none':
            self.logger.error('repo not found or no permissions')
            return False

        elif permission in ['repository.admin', 'repository.write']:
            self.logger.info(
                'Write Permissions for User "%s" granted to repo "%s"!' % (
                    self.user, self.repo_name))
        else:
            self.read_only = True
            self.logger.info(
                'Only Read Only access for User "%s" granted to repo "%s"!',
                self.user, self.repo_name)
        return True


class GitServer(VcsServer):
    def __init__(
            self, repo_name, repo_mode, user, user_permissions, config,
            logger):
        super(GitServer, self).__init__(user, user_permissions, config, logger)
        self.repo_name = repo_name
        self.repo_mode = repo_mode

    def run(self):
        self.logger.debug(
            'git detected. mode: %s repo: %s', self.repo_mode, self.repo_name)
        exit_code = self._check_permissions()
        if exit_code:
            return exit_code

        self._update_environment()
        exit_code = os.system(self.command)
        return exit_code

    @property
    def command(self):
        root = self.config.get('vcs', 'root')
        git_path = self.config.get('vcs:git', 'path')
        command = "cd {root}; {git_path}git-{mode} '{root}{repo_name}'".format(
            root=root, git_path=git_path, mode=self.repo_mode,
            repo_name=self.repo_name)
        self.logger.debug("Final CMD: %s", command)
        return command

    def _update_environment(self):
        action = "push" if self.repo_mode == "receive-pack" else "pull",
        scm_data = {
            "ip": os.environ["SSH_CLIENT"].split()[0],
            "username": self.user,
            "action": action,
            "repository": self.repo_name,
            "scm": "git",
            "config": self.config.get('rhodecode', 'config'),
            "make_lock": None,
            "locked_by": [None, None]
        }
        os.putenv("RC_SCM_DATA", json.dumps(scm_data))

    def _check_permissions(self):
        permission = self.user_permissions.get(self.repo_name)
        self.logger.debug(
            'permission for %s on %s are: %s',
            self.user, self.repo_name, permission)
        if permission is None or permission == 'repository.none':
            self.logger.error('repo not found or no permissions')
            return 2
        elif permission in ['repository.admin', 'repository.write']:
            self.logger.info(
                'Write Permissions for User "%s" granted to repo "%s"!',
                self.user, self.repo_name)
        elif (permission == 'repository.read' and
                self.repo_mode == 'upload-pack'):
            self.logger.info(
                'Only Read Only access for User "%s" granted to repo "%s"!',
                self.user, self.repo_name)
        elif (permission == 'repository.read'
                and self.repo_mode == 'receive-pack'):
            self.logger.error(
                'Only Read Only access for User "%s" granted to repo "%s"!'
                ' Failing!', self.user, self.repo_name)
            return -3
        else:
            self.logger.error('something unknown happened.')
            return -2
        return None


class SubversionServer(VcsServer):
    def run(self):
        # Make sure that logs are not going to STDOUT
        self.logger.debug('SVN detected')
        root = self.config.get('vcs', 'root')

        svn_path = self.config.get('vcs:svn', 'path')
        self.logger.debug("Using subversion binaries from '%s'", svn_path)

        self.tunnel = SubversionTunnelWrapper(
            timeout=self.timeout, repositories_root=root, svn_path=svn_path)
        self.tunnel.start()
        first_response = self.tunnel.get_first_client_response()
        if not first_response:
            self.tunnel.fail("Repository name cannot be extracted")
            return 1

        url_parts = urlparse.urlparse(first_response['url'])
        self.repo_name = url_parts.path.strip('/')
        if not self._check_permissions():
            self.tunnel.fail("Not enough permissions")
            return 1

        self.tunnel.patch_first_client_response(first_response)
        self.tunnel.sync()
        return self.tunnel.return_code

    @property
    def timeout(self):
        try:
            timeout = int(self.config.get('vcs:svn', 'timeout'))
        except:
            timeout = 5
        return timeout

    def _check_permissions(self):
        permission = self.user_permissions.get(self.repo_name)

        if permission in ['repository.admin', 'repository.write']:
            self.tunnel.read_only = False
            return True

        if permission == 'repository.read':
            self.tunnel.read_only = True
            return True

        else:
            self.tunnel.fail("Not enough permissions for repository {}".format(
                self.repo_name))
            return False

        return True


class SshWrapper(object):
    logger = None
    arguments = {}
    config = {}

    def __init__(self, command):
        self.arguments = self.parse_arguments()
        self.logger = self.get_logger()
        self.config = self.parse_config()
        self.command = command
        self.api = RhodeCodeApiClient(self.config, self.logger)

    def parse_arguments(self):
        script_path = os.path.dirname(os.path.abspath(__file__))
        parser = argparse.ArgumentParser(
            description='Process ssh commands for rhodecode.')
        parser.add_argument(
            '--mode', '-m', required=False, default='auto',
            help='mode of operation: auto, vcs, git, hg, test')
        parser.add_argument('--user', '-u', default='default')
        parser.add_argument(
            '--shell', '-s', action='store_true', help='Allow Shell')
        parser.add_argument('--log', '-l', default='ERROR', help='loglevel')
        parser.add_argument(
            '--config', '-c', default='%s/sshwrapper.ini' % (script_path),
            help='config file')
        parser.add_argument(
            '--logfile', '-f', default='%s/sshwrapper.log' % (script_path),
            help='logfile path')
        return parser.parse_args()

    def get_logger(self):
        log_level = self.arguments.log.upper()
        numeric_level = getattr(logging, log_level, None)

        if not isinstance(numeric_level, int):
            raise ValueError('Invalid log level: %s' % log_level.upper())

        logging.basicConfig(
            level=logging.DEBUG,
            format='%(asctime)s %(name)-12s %(levelname)-8s %(message)s',
            datefmt='%Y-%m-%d %H:%M:%S', filename=self.arguments.logfile)

        console = logging.StreamHandler()
        console.setLevel(numeric_level)
        # set a format which is simpler for console use
        formatter = logging.Formatter(
            '%(name)-12s: %(levelname)-8s %(message)s')
        # tell the handler to use this format
        console.setFormatter(formatter)
        # add the handler to the root logger
        logging.getLogger('').addHandler(console)
        return logging.getLogger('')

    def parse_config(self):
        if not os.path.isfile(self.arguments.config):
            raise Exception(
                'Config File does not exist! Did you copy the sample config?')
        parser = ConfigParser.ConfigParser()
        parser.read(self.arguments.config)
        return parser

    def get_repo_details(self):
        type_ = None
        name = None
        mode = None

        hg_pattern = r'^hg\s+\-R\s+(\S+)\s+serve\s+\-\-stdio$'
        git_pattern = (
            r'^git-(receive-pack|upload-pack)\s\'[/]?(\S+?)(|\.git)\'$')
        svn_pattern = r'^svnserve -t'

        # TODO: Matching against 3 patterns can be expensive
        hg_match = re.match(hg_pattern, self.command)
        git_match = re.match(git_pattern, self.command)
        svn_match = re.match(svn_pattern, self.command)

        if hg_match is not None:
            type_ = 'hg'
            name = hg_match.group(1).strip('/')

        elif git_match is not None:
            type_ = 'git'
            name = git_match.group(2).strip('/')
            mode = git_match.group(1)

        elif svn_match is not None:
            type_ = 'svn'
            # Repo name should be extracted from the input stream

        return (type_, name, mode)

    def serve(self, vcs, repo, mode, user, permissions):
        if vcs == 'hg':
            server = MercurialServer(
                repo_name=repo, user=user, user_permissions=permissions,
                logger=self.logger, config=self.config)
            exit_code = server.run()

            if exit_code == 0:
                self.api.invalidate_cache(repo)

        elif vcs == 'git':
            server = GitServer(
                repo_name=repo, repo_mode=mode, user=user,
                user_permissions=permissions, logger=self.logger,
                config=self.config)
            exit_code = server.run()

            if mode == 'receive-pack' and exit_code == 0:
                self.api.invalidate_cache(repo)

        elif vcs == 'svn':
            server = SubversionServer(
                user=user, user_permissions=permissions, logger=self.logger,
                config=self.config)
            exit_code = server.run()
            # TODO: Add cache invalidation
        else:
            raise Exception('Unrecognised VCS: {}'.format(vcs))

        return exit_code

    def wrap(self):
        mode = self.arguments.mode
        user = self.arguments.user
        shell = self.arguments.shell

        if shell and self.command is None:
            self.logger.info(
                'Dropping to shell, no command given and shell is allowed')
            os.execl('/bin/bash', '-l')
            return 1
        elif shell is False and self.command is None:
            self.logger.error('No Command given.')
            return -1

        scm_detected, scm_repo, scm_mode = self.get_repo_details()

        try:
            permissions = self.api.get_user_permissions(user)
        except Exception as e:
            self.logger.error(e.message)
            return 1

        self.logger.debug(
            'Mode: %s User: %s Shell: %i Command: \"%s\" SCM: %s '
            'SCM Mode: %s SCM Repo: %s',
            mode, user, shell, self.command, scm_detected, scm_mode, scm_repo)

        exit_code = 0

        if scm_detected:
            try:
                self.serve(scm_detected, scm_repo, scm_mode, user, permissions)
            except Exception as e:
                self.logger.error(e.message)
                exit_code = -1
        else:
            self.logger.error(
                'Unhandled Command: "%s" Aborting.', self.command)
            exit_code = -1

        return exit_code


if __name__ == '__main__':
    command = os.environ.get('SSH_ORIGINAL_COMMAND', None)
    try:
        ssh_wrapper = SshWrapper(command)
    except Exception as e:
        sys.exit(-5)

    exit_code = ssh_wrapper.wrap()
    sys.exit(exit_code)
