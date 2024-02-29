#!/usr/bin/env python3
import sys
import re

argc = len(sys.argv) - 1
if argc != 2:
    print("none")
    sys.exit(1)

keyword = sys.argv[1]
string = sys.argv[2]

match = re.findall(keyword, string)
count = len(match)
if count:
    print(count)
else:
    print("none")