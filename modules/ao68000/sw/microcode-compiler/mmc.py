#!/usr/bin/env python

import argparse
import sys
import re
from enum import Enum

class FSMState(Enum):
    RECOGNIZE   = 0
    INSTR       = 1
    ENDINSTR    = 2
    COMMENT     = 3
    EXTERNAL    = 4
    LABEL       = 5

class Mmc(object):
    inputfile = ''
    outputfile=''
    defs=''
    cpu=''
    tokens = []
    
    def __init__(self, inputfile, outputfile, defs, cpu):
        self.inputfile = inputfile
        self.outputfile = outputfile
        self.defs = defs
        self.cpu = cpu

    def compile(self):
        label = ''
        external = False
        instr_oneliner = None

        self.parse_input_file()
        token_iter = iter(self.tokens)

        # state machine - actual compiling
        state = list()
        state.insert(0, FSMState.RECOGNIZE)
        while(True):
            token = token_iter.next()
            print "state: " + str(state[0]) + " next token: " + token
            if state[0] == FSMState.RECOGNIZE:
                if token.startswith('#') or token.startswith("//"):
                    state.insert(0, FSMState.COMMENT)
                elif token == "instr":
                    state.insert(0, FSMState.INSTR)
                elif token == "external":
                    external = True
                    state.insert(0, FSMState.EXTERNAL)
                elif re.match('^[a-zA-Z0-9_-]+:', token) is not None:
                    label = token[0:-1]
                    state.insert(0, FSMState.LABEL)
                elif token == "\n":
                    continue
                else:
                    raise Exception("Unexpected token")

            elif state[0] == FSMState.EXTERNAL:
                if token.startswith('#') or token.startswith("//"):
                    state.insert(0, FSMState.COMMENT)
                elif token == "\n":
                    continue
                elif token == "instr":
                    state.pop(0) # we dont need to bother with this, we have external var set to True
                    state.insert(0, FSMState.INSTR)
                else:
                    raise Exception( "Syntax error: external " + token)

            elif state[0] == FSMState.LABEL:
                if token.startswith('#') or token.startswith("//"):
                    state.insert(0, FSMState.COMMENT)
                elif token == "external":
                    external = True
                    state.insert(0, FSMState.EXTERNAL)
                elif token == "\n":
                    continue
                elif token == "instr":
                    state.pop(0) # we dont need to bother with this, we have external var set to True
                    state.insert(0, FSMState.INSTR)
                else:
                    raise Exception( "Syntax error: label " + token)

            elif state[0] == FSMState.INSTR:
                if token.startswith('#') or token.startswith("//"):
                    if instr_oneliner == None:
                        instr_oneliner = False
                    state.insert(0, FSMState.COMMENT)
                elif token == "\n":
                    if instr_oneliner == None:
                        instr_oneliner = False
                    elif instr_oneliner == True:
                        state.pop(0)
                elif token == "endinstr":
                    state.pop(0)
                elif token.startswith('EA_REG'):
                    pass
                elif token.startswith('EA_MOD'):
                    pass
                else:
                    print "Unrecognized token: " + token

            elif state[0] == FSMState.COMMENT:
                if token == "\n":
                    state.pop(0)
                    

    def parse_input_file(self):
        content = self.inputfile.readlines()
        # Replace \n with ' __EOL__ ' so we can detect newline
        # This might be the most dirtyway, currently i haven't better solution
        for line in content:
            linetokens = line.split()
            self.tokens = self.tokens + linetokens + [ "\n" ]


def parse_arguments():
    parser = argparse.ArgumentParser(
            description='m68k microcode compiler')
    parser.add_argument('--input', '-i', required=False, default='-',
            help='Input filename, or "-" for stdin')
    parser.add_argument('--output', '-o', required=False,  default='-',
            help='Output filename, or "-"for stdout')
    #parser.add_argument('--defs', '-d', required=True,
    #        help='Output filename, or "-"for stdout')
    parser.add_argument('--cpu', '-c', required=False, default='mc68000',
            help='Processor type. Currently only mc68000 (default).')

    return parser.parse_args()

if __name__ == '__main__':
    args = parse_arguments()
    defs = "bla"

    if args.input == '-':
        inputfile = sys.stdin
    else:
        inputfile = open(args.input, 'r')

    if args.output == '-':
        outputfile = sys.stdout
    else:
        outputfile = open(args.output, 'w')
     
    mmc = Mmc(inputfile, outputfile, defs, args.cpu)
    mmc.compile()
    #try:
    #except Exception as e:
    #    print e
    #    sys.exit(1)
    sys.exit(0)

