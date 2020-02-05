n, m = map(int, input().split())
l, r = [input().split()for i in[1,1]]
lused, rused = [0]*n, [0]*m

ans = 0
for i in range(n):
    for j in range(m):
        if l[i]==r[j]:
            if lused[i] or rused[j]:continue
            ans += 1
            lused[i] = 1
            rused[j] = 1
print(ans)
