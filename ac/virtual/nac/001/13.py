n, k, *a = map(int, open(0).read().split())
a.sort()
for i in range(n-1): a[n-i-1] = abs(a[n-i-1]-a[n-i-2])
a[0] = 0
for i in range(n-1): a[i+1] += a[i]

mn = 1e18
for i in range(n-k+1): mn = min(mn, a[i+k-1]-a[i])
print(mn)
