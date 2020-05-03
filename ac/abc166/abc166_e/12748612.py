n, *a = map(int, open(0).read().split())
x = [[0, 0] for i in range(n)]
for i in range(n):
    if 0<=i-a[i]<n: x[i-a[i]][0] += 1
    if 0<=i+a[i]<n: x[i+a[i]][1] += 1
ans = 0
for y in x:
    ans += y[0] * y[1]
print(ans)
