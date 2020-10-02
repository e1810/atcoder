dis = [0] * 51
for i in range(51):
    if i%2: dis[i] = 10 + 7*(i//2)
    else: dis[i] = 10 - 7*(i//2)


for q in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))

    dp = [[-1e18]*(n+1) for i in range(n+1)]
    dp[0][0] = 0

    for i in range(1, n+1):
        for j in range(0, n):
            dp[i][0] = max(dp[i][0], dp[i-1][j])
            dp[i][j+1] = max(dp[i][j+1], dp[i-1][j] - a[i-1]//10*dis[j+1])
    
    print(max(dp[n]))
