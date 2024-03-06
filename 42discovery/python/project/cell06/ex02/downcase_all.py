#!/usr/bin/env python3

import sys

def downcase_it(string):
    return string.lower()

argc = len(sys.argv) - 1

if not argc:
    print("none")
else:
    for i in range(1, argc + 1):
        print(downcase_it(sys.argv[i]))

