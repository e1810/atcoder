n, m = map(int, input().split())

links = [[0]*n for i in range(n)]
for i in range(m):
    a, b = map(int, input().split())
    links[a-1][b-1] = links[b-1][a-1] = 1

ans = 1
for i in range(1<<n):
    tmp = 0
    for j in range(n):
        if (i>>j)&1==0: continue
        tmp += 1
        for k in range(j+1, n):
            if (i>>k)&1==0: continue
            if links[j][k]==0: tmp = -1e18
    ans = max(ans, tmp)
print(ans)
