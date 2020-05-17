from math import cos, pi
a, b, h, m = map(int, input().split())
d = 5.5 * (h * 60 + m)
print((a*a + b*b - 2*a*b*cos(d / 180 * pi))**0.5)
