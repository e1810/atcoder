n, m, d = map(int, input().split())
fig = [list(input()) for i in range(n)]

hor = []
for i in range(n):
    tmp = 0
    for j in range(m):
        if fig[i][j]==".": tmp += 1
        else:
            hor.append(tmp)
            tmp = 0
    hor.append(tmp)

ver = []
for i in range(m):
    tmp = 0
    for j in range(n):
        if fig[j][i]==".": tmp += 1
        else:
            ver.append(tmp)
            tmp = 0
    ver.append(tmp)

ans = 0
for i in hor:
    if i-d>=0: ans += i-d+1
for i in ver:
    if i-d>=0: ans += i-d+1
print(ans)
