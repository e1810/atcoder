
from math import degrees, atan
a, b, x = map(int, input().split())

if a*a*b/2 > x:
    t = (b/2) / (x/a/b)
else:
    johen = 2*x/a/a - b
    t = (b-johen) / a
print(degrees(atan(t)))
