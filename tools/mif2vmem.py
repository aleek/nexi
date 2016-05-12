#!/usr/bin/env python
import fileinput
import sys

# Takes mif file as an input and converts it to vmem format

with sys.stdin as infile:
    for line in infile:
        params = line.split( ':')
        index = int(params[0].strip())
        microcode = params[1].strip()[0:-1]
        print '@' + format(index, 'x') + ' ' + microcode


