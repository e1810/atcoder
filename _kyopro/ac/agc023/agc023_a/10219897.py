
from collections import Counter
n, *a = map(int, open(0).read().split())
a = [0] + a
for i in range(n): a[i+1] += a[i]

ans = 0
for i in Counter(a).items(): ans += i[1]*(i[1]-1)//2
print(ans)
