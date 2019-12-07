n, *a = map(int, open(0).read().split())

ans = 0
for i in range(n-4):
    for j in range(i+2, n-2):
        for k in range(j+2, n):
            ans = max(ans, a[i]+a[j]+a[k])
print(ans)
