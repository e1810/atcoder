#!/usr/bin/env python3
def gcd(x, y):
    if x<y: x, y = y, x
    while y: x, y = y, x%y
    return x

def lcm(x, y):
    return x * y // gcd(x, y)

a, b, c, d = map(int, input().split())
a -= 1
e = lcm(c, d)
print(b-a -b//c-b//d+b//e + a//c+a//d-a//e)
