
from math import ceil, log
n, k = map(int, input().split())
if n > k:
    ans = (n-k)/n
    o = k
else:
    ans = 0
    o = n

for i in range(1, o+1):
    ans += 1 / (n * 2 ** ceil(log(k/i, 2)))
print(ans)
