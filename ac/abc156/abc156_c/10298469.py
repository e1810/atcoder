
n, *a = map(int, open(0).read().split())

ans = 1e18
for i in range(1, 101):
        tmp = 0
        for j in a: tmp += (j-i)**2
        ans = min(ans, tmp)
print(ans)
