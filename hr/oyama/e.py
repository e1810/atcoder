s, a, b, n = map(int, open(0).read().split())
a += 1
x = a ** n * s
y = b * (a**n-1)/(a-1)
print((x+y)%(1000000007))
