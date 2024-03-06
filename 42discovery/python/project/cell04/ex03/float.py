#!/usr/bin/env python
from decimal import *
getcontext().prec = 28       
print(getcontext())
num = float(input("Give me a number: "))
if num % 1 == 0:
    print("The number is an integer")
else:
    print("The number is a decimal")