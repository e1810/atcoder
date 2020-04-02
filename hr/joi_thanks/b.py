for qq in range(int(input())):
	n = int(input())
	a = list(map(int, input().split()))
	
	dp = [[0]*7 for i in range(n+1)]
	for i in range(1, n+1):
		for j in range(7):
			dp[i][j] = dp[i-1][j]+(a[i-1]!=j+1)
			if j>0: dp[i][j] = min(dp[i][j], dp[i-1][j-1]+(a[i-1]!=j+1))
			if j<6: dp[i][j] = min(dp[i][j], dp[i-1][j+1]+(a[i-1]!=j+1))
	print(min(dp[n]))
		
	
