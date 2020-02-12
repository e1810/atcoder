n = int(input())
em = [[]for i in range(n)]
for i in range(n-1): em[int(input())-1].append(i+1)

def dfs(p, sm):
    if not em[p]: return 1
    mx, mn = 0, 1e18
    for i in em[p]:
        tmp = dfs(i, sm)
        mx = max(mx, tmp)
        mn = min(mn, tmp)
    return mx+mn+1

print(dfs(0, 0))
    

