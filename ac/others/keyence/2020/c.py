n, k, s = map(int, input().split())
ans = [0] * n
for i in range(k): ans[i] = s
for i in range(k, n): ans[i] = s+1-2*(s==1e9)
print(*ans)
