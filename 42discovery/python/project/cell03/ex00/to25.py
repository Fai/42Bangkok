#!/usr/bin/env python
print("Enter a number less than 25")
number = int(input())
if (number > 25):
    print("Error")
while number <= 25:
    print("Inside the loop, my variable is",number)
    number = number + 1