#!/usr/bin/env python3

import sys
argc = len(sys.argv)

if argc == 1:
    print("none")
else:
    for i in range(1, argc):
        # if not end with ism
        if sys.argv[i][-3:] != "ism":
            print(sys.argv[i] + "ism")