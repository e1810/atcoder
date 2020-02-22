n, *a = map(int, open(0).read().split())

b = [[0]*(n+1) for i in range(123)]
for i in range(n): b[a[i]-1][i+1] += 1

for c in b:
    for j in range(n):
        c[j+1] += c[j]

ans = 0
for i in range(n+1):
    for j in range(i, n+1):
        tmp = 0
        for k in range(123):
            if (b[k][j]-b[k][i])%2: tmp += 1
        ans = max(ans, tmp)
print(ans)
