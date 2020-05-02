
n, *k = map(int, open(0).read().split())
ans = [1e9] * n
for i in range(n-1):
        ans[i] = min(ans[i], k[i])
        ans[i+1] = min(ans[i+1], k[i])
print(*ans)
