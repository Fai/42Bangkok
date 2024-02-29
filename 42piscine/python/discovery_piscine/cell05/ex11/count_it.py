#!/usr/bin/env python3
import sys
argc = len(sys.argv)

if argc == 1:
    print("none")
else:
    print("parameters:", end="")
    print(argc)
    for i in range(1, argc):
        print(sys.argv[i] + ": " + str(len(sys.argv[i])))