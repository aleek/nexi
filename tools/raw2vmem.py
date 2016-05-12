#!/usr/bin/env python
import fileinput
import sys

# takes raw binary data (memory image for processor)
# and converts it to vmem format
# @index binaryvalue

with sys.stdin as infile:
    i = 0
    for line in infile:
        var = '@' + format(i, 'x') + ' ' + line
        sys.stdout.write(var)
        i = i+1


