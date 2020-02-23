
n, k, *a = map(int, open(0).read().split())
a.sort()

ans = 1e18
for i in range(n-k+1):
        ans = min(ans, a[i+k-1]-a[i])
print(ans)
