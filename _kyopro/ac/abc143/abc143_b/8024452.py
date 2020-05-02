
n, *d = map(int, open(0).read().split())
ans = 0
for i in range(n):
    for j in range(i+1, n):
       ans += d[i]*d[j]
print(ans)
