n, k = map(int, input().split())

dp = [1e9] * 200010
dp[1] = 0
for i in range(200010):
	if i+3<200010:
		dp[i+3] = min(dp[i+3], dp[i] + 1)
	if i*2<200010:
		dp[i*2] = min(dp[i*2], dp[i] + 1)
print("YNEOS"[dp[n]>k::2])
