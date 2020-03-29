n = [0] + list(map(int, list(input())))
k = int(input())
l = len(n)-1

dp = [[[0]*4 for j in range(2)]for i in range(l+1)]
dp[0][0][0] = dp[1][0][0] = 1
dp[1][0][1] = n[1]


for i in range(2, l+1):
	for j in range(4):
		dp[i][0][j] = dp[i-1][0][j] + dp[i-1][1][j]
	for j in (1,2,3):
		dp[i][0][j] += n[i]*dp[i-1][0][j-1]
		dp[i][1][j] += n[i]*(dp[i-1][0][j-1]) + 9*(dp[i-1][1][j-1])


for i in dp:
	for j in i:
		print(*j)
	print()
print(dp[l][0][k]+dp[l][1][k])
