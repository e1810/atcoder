
a, b, c, d = map(int, input().split())
x, y = c, d
if x<y: x, y = y, x
while y: x, y = y, x%y
lcm = c*d//x

a -= 1
e = b - (b//c + b//d - b//lcm)
f = a - (a//c + a//d - a//lcm)
print(e-f)
