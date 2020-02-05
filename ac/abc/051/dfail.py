n, m = map(int, input().split())
links = [[[1e11*(i!=j), [1e11]]for i in range(n)]for j in range(n)]
used = [[0]*n for i in range(n)]

for i in range(m):
    a, b, c = map(int, input().split())
    links[a-1][b-1] = [c, [a-1, b-1]]
    links[b-1][a-1] = [c, [b-1, a-1]]
    used[a-1][b-1] = 1
    used[b-1][a-1] = 1

for k in range(n):
    for i in range(n):
        for j in range(n):
            if links[i][j][0]>=links[i][k][0]+links[k][j][0]:
                links[i][j] = [links[i][k][0]+links[k][j][0], links[i][k][1]+links[k][j][1]]

for i in range(n):
    for j in range(n):
        prev = links[i][j][1][0]
        for k in links[i][j][1]:
            if prev!=k and (not 1e11 in [prev,k]): used[prev][k] = 0
            prev = k

#print(links)
#print(used)

ans = 0
for i in range(n): ans += sum(used[i])
print(ans//2)
