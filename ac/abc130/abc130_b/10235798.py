
n, x, *a = map(int, open(0).read().split())
a = [0] + a
for i in range(n): a[i+1] += a[i]
ans = 0
for i in range(n+1): ans += (a[i]<=x)
print(ans)
