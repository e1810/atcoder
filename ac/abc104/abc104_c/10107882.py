
n, g = map(int, input().split())

pc = [list(map(int, input().split())) for i in range(n)]

p = [pc[i][0] for i in range(n)]
c = [pc[i][0]*(i+1)*100+pc[i][1] for i in range(n)]


ans = 1e18
for i in range(1<<n):
    sm = cnt = idx = 0
    for j in range(n):
        if (i>>j)&1:
            sm += c[j]
            cnt += p[j]
        else:
            idx = j+1
    if g-sm>0:
        tmp = (g-sm+idx*100-1)//(idx*100)
        if 0<=tmp<=p[idx-1]: ans = min(ans, cnt+tmp)
    else: ans = min(ans, cnt)
print(ans)
