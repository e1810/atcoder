
n, *a = map(int, open(0).read().split())
mn = 1e7
ans = 0
for i in range(n):
    if a[i]<=mn:
        ans += 1
        mn = a[i]
print(ans)
