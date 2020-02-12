n, *a = map(int, open(0).read().split())
a.sort()
ans = 1e10
for i in range(1, n):
    x, y = a[0], a[i]
    while y%x:
        y -= y//x*x
        x, y = y, x
    ans = min(ans, x)
print(ans)
