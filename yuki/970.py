n = int(input())
a = list(map(int, input().split()))
d = [a[0]-a[i] for i in range(1, n)]
ans = [a[0]-sum(d)] * n
for i in range(1, n): ans[i] = ans[0] + d[i-1]*(n-1)
print(*ans)

