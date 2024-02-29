#!/usr/bin/env python3
import sys
argc = len(sys.argv) - 1
if not argc:
    print("none")
else:
    for i in range(argc, 0, -1):
        print(sys.argv[i])