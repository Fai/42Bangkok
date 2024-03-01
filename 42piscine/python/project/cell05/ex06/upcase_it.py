#!/usr/bin/env python3
import sys
argc = len(sys.argv) - 1
if argc:
    print(sys.argv[1].upper())
else:
    print("none")