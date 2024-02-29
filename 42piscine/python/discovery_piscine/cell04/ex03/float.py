#!/usr/bin/env python
print("Give me a number: ", end = "")
num = float(input())
if num % 1 == 0:
    print("The number is an integer")
else:
    print("The number is a decimal")