#!/usr/bin/env python3

import sys

def shrink(string):
    # slice and display first eight characters
    print(string[0:8])

def enlarge(string):
    # append 'Z' to make it total eight characters using concat
    z = 8 - len(string)
    print(string + ('z' * z))

argc = len(sys.argv)

if not argc:
    print("none")
else:
    for i in range(argc):
        argl = len(sys.argv[i])
        if argl > 8:
            shrink(sys.argv[i])
        if argl < 8:
            enlarge(sys.argv[i])
        if argl == 8:
            print(sys.argv[i])
