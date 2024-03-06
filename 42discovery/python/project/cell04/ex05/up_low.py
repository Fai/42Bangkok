#!/usr/bin/env python3
string = input();
for c in string:
    if c.isupper():
        print(c.lower(), end='')
    elif c.islower():
        print(c.upper(), end='')
    else:
        print(c, end='')
print("")