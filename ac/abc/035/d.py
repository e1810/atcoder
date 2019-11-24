from sys import stdin
from heapq import *


input = stdin.readline
n, m, t = map(int, input().split())
l = list(map(int, input().split()))

go = [[] for i in range(n)]
back = [[] for i in range(n)]
for i in range(m):
    a, b, c = map(int, input().split())
    go[a-1].append((b-1, c))
    back[b-1].append((a-1, c))


goDist = [1e11] * n
goDist[0] = 0

candidates = []
heappush(candidates, (0, 0))
while candidates:
    v, cost = heappop(candidates)
    if goDist[v] < cost: continue
    for edge in go[v]:
        vNx, costNx = edge
        if goDist[vNx] <= goDist[v] + costNx: continue
        goDist[vNx] = goDist[v] + costNx
        heappush(candidates, edge)

backDist = [1e11] * n
backDist[0] = 0

heappush(candidates, (0, 0))
while candidates:
    v, cost = heappop(candidates)
    if backDist[v] < cost: continue
    for edge in back[v]:
        vNx, costNx = edge
        if backDist[vNx] <= backDist[v] + costNx: continue
        backDist[vNx] = backDist[v] + costNx
        heappush(candidates, edge)


ans = 0
for i in range(n):
    earn = l[i] * (t - goDist[i] - backDist[i])
    ans = max(ans, earn)
print(ans)
