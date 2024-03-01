#!/usr/bin/env python3

def add_one(param):
    return param + 1

x = 10
print(x)
add_one(x)
print(x)
x = add_one(x)
print(x)