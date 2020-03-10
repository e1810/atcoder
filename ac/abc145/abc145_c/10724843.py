
from itertools import permutations

n = int(input())
x, y = zip(*[list(map(int, input().split()))for i in range(n)])
ans = cnt = 0
for i in permutations(range(n)):
        cnt += 1
        for j in range(n-1):
                f, t = i[j], i[j+1]
                ans += ((x[f]-x[t])**2 + (y[f]-y[t])**2)**0.5
print(ans/cnt)
