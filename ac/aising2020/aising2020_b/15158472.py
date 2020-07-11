n, *a = map(int, open(0).read().split())
ans = 0
for i in range(n):
    if i%2==0 and a[i]%2:
        ans += 1
print(ans)
