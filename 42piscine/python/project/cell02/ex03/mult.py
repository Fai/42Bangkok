#!/usr/bin/env python
print("Enter the first number:")
first = input()
print("Enter the second number:")
second = input()
multiply = int(first) * int(second)
print(first + " x " + second + " = " + str(multiply))
if multiply == 0:
    print("The result is both positive and negative.")
elif multiply > 0:
    print("The result is positive.")
else:
    print("The result is negative.")