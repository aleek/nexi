#!/usr/bin/env python2
import sys
import bisect

symbol_list = []
sym_keys = []

def parse_system_map(f):
    global symbol_list
    global sym_keys
    for line in f:
        el = line.split()
        #if el[1] == "T" or el[1] == 't':
        symbol_list.append( [ int(el[0], 16), el[2] ]);
            #print symbol_list[len(symbol_list)-1]

    # the System.map file should be sorted, but we'll sort it anyway
    # just to be sure
    symbol_list.sort(key=lambda r: r[0])
    sym_keys = [r[0] for r in symbol_list]
    print "func len" + str(len(sym_keys))
    #for k in sym_keys:
    #    print k

def find_symbol(addr):
    if addr > symbol_list[len(symbol_list)-1][0]:
        return "NaF", 0

    #print bisect.bisect_left(sym_keys, addr)
    index = bisect.bisect_left(sym_keys, addr) - 1
    if index == len(sym_keys) or index < 0:
        return "NaF", 0
    bla = symbol_list[index]
    return bla[1], addr - bla[0]



def parse_trace(f):
    for line in f:
        addr = int(line, 16)
        sym, offset = find_symbol(addr)
        if sym == "NaF":
            continue
        print sym + " + " + hex(offset) + "\t\t\t" + hex(addr)


if __name__ == "__main__":
    parse_system_map(sys.stdin)
    parse_trace(open(sys.argv[1]))

