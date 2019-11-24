n, m = map(int, input().split())
cost = [[1e10]*n for i in range(n)]
for i in range(m):
    l, r, c = map(int, input().split())
    for j in range(l, r+1):
        for k in range(l, r+1):
            if j==k: cost[j-1][k-1] = 0
            else: cost[j-1][k-1] = min(cost[j-1][k-1], c)

for i in range(1, n):
    for j in range(n):
        cost[0][j] = min(cost[0][j], cost[0][i]+cost[i][j])

ans = cost[0][n-1]
print(ans if ans!=1e10 else -1)
    
