from math import log
n = int(input())

l = int(log(n, 2))
tmp = 1
ans = 0
for i in range(l+1):
    ans += tmp
    tmp *= 2
print(ans)
