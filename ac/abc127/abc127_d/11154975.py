
from heapq import heappop, heappush

n, m = map(int, input().split())
a = []
for i in map(int, input().split()): heappush(a, i)

ans = []
for b, c in sorted([list(map(int, input().split()))for i in range(m)], key=lambda x:-x[1]):
        for i in range(b):
                if len(a)==0: break
                ans.append(max(c,  heappop(a)))
while len(a): ans.append(heappop(a))
print(sum(ans))
