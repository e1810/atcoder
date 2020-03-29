n, *a = map(int, open(0).read().split())
a = sorted([0,24]+a)
for i in range(1, n+1, 2): a[i] = 24-a[i]
a.sort()
ans = 24
for i in range(n+1): ans = min(ans, abs(a[i]-a[i+1]))
print(ans)

