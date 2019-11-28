a, b, x = map(int, input().split())
n = 1
dn = 1
while a*(n*10)+b*(dn+1) <= x:
    n *= 10
    dn += 1
x -= b*dn
print(max(0, min(1000000000, x//a, n*10-1)))
