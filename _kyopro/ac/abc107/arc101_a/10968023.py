
n, k, *a = map(int, open(0).read().split())
ans = 1e11
for i in range(n-k+1):
    ans = min(ans, a[i+k-1]-a[i]+min(abs(a[i+k-1]),abs(a[i])))
print(ans)
