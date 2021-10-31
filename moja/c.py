n, *a = map(int, open(0).read().split())

dp = [[0]*3 for i in range(1+n)]
for i in range(n):
	dp[i+1][0] = max(dp[i])
	dp[i+1][1] = dp[i][0] + a[i]
	dp[i+1][2] = dp[i][1] + a[i]
print(max(dp[n]))
