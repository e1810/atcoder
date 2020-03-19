n = input()
l = len(n)

dp = [[0]*2 for i in range(l+1)]
dp[l] = [0,0]
for i in range(l):
    dp[l-i-1][0] = max(dp[l-i][0]+int(n[l-i-1]), dp[l-i][1]+int(n[l-i-1])-1)
    dp[l-i-1][1] = max(dp[l-i][0]+9, dp[l-i][1]+9)
dp[0][1] = max(dp[1][0]+int(n[0]), dp[1][1]+int(n[0])-1)
print(max(dp[0]))

