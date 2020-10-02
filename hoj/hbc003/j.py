from math import gcd
n = int(input())
x = [0] * n
y = [0] * n
for i in range(n):
    x[i], y[i] = map(int, input().split())
    g = gcd(x[i], y[i])
    x[i] //= g
    y[i] //= g

Y = 0
for i in range(n):
    Y = gcd(x[i], Y)
X = 1
for i in range(n):
    X = y[i] * X // gcd(y[i], X)
print(X, Y)
