n, m, x = map(int, input().split())
ca = [list(map(int, input().split())) for i in range(n)]
ans = 1e18
for i in range(1<<n):
    cost = 0
    udst = [0] * m
    for j in range(n):
        if((i>>j)&1):
            cost += ca[j][0]
            for k in range(m):
                udst[k] += ca[j][k+1]
    ok = True
    for j in range(m):
        if udst[j]<x: ok = False
    if ok: ans = min(ans, cost)

if ans>=1e18: print(-1)
else: print(ans)
