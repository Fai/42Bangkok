#!/usr/bin/env python3
import sys

argc = len(sys.argv)
if argc != 2:
    print("none")
    exit(0)

print("What was the parameter? ", end="")
parameter = input()
if parameter == sys.argv[1]:
    print("Good job!")
else:
    print("Nope, sorry...")