
from sys import stdin
n, m = map(int, stdin.readline().split())
mn = 1
mx = n

for i in range(m):
    l, r = map(int, stdin.readline().split())
    mn = max(mn, l)
    mx = min(mx, r)
print(max(0, mx-mn+1))
