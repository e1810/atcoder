for qq in range(int(input())):
	n = int(input())
	a = list(map(int, input().split()))
		
	dp = [[[0, 10**9, -10**9, 0] for i in range(6)] for j in range(1+n)]
	dp[0][0] = [1, 1, 0, 0]
	for i in range(1, n+1):
		for j in range(6):
			dp[i][j][0] = max(dp[i][j][0], dp[i-1][j][0])
			dp[i][j][1] = min(dp[i][j][1], dp[i-1][j][1])
			dp[i][j][2] = max(dp[i][j][2], dp[i-1][j][2])
			dp[i][j][3] = min(dp[i][j][3], dp[i-1][j][3])
				
		for j in range(1, 6):
			if a[i-1]>=0:
				dp[i][j][0] = max(dp[i][j][0], dp[i-1][j-1][0]*a[i-1])
				dp[i][j][1] = min(dp[i][j][1], dp[i-1][j-1][1]*a[i-1])
				dp[i][j][2] = max(dp[i][j][2], dp[i-1][j-1][2]*a[i-1])
				dp[i][j][3] = min(dp[i][j][3], dp[i-1][j-1][3]*a[i-1])
			elif a[i-1]<0:
				dp[i][j][0] = max(dp[i][j][0], dp[i-1][j-1][3]*a[i-1])
				dp[i][j][1] = min(dp[i][j][1], dp[i-1][j-1][2]*a[i-1])
				dp[i][j][2] = max(dp[i][j][2], dp[i-1][j-1][1]*a[i-1])
				dp[i][j][3] = min(dp[i][j][3], dp[i-1][j-1][0]*a[i-1])
				
	p = m = z = 0
	for x in a:
		if x>0: p+=1
		elif x<0: m+=1
		else: z+=1
	
	if n==5:
		if m%2: print(dp[n][5][2])
		else: print(dp[n][5][0])
	else:
		if z==0 and p==0: print(dp[n][5][2])
		else: print(dp[n][5][0])


