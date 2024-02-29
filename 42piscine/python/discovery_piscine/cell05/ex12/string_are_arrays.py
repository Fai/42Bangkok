#!/usr/bin/env python3
import sys
argc = len(sys.argv)
if argc != 2:
    print("none")
else:
    string = sys.argv[1]
    for i in range(0, len(string)):
        if (string[i] == "z"):
            print(string[i], end="")
    print("")