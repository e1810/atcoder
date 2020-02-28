
#include<bits/stdc++.h>

int main(){
        int n;
        scanf("%d", &n);
        std::vector<std::vector<int>> dp(n+1, std::vector<int>(3, 0));

        for(int i=1; i<=n; i++){
                int a, b, c;
                scanf("%d %d %d", &a, &b, &c);
                dp[i][0] = std::max({dp[i][0], dp[i-1][1]+a, dp[i-1][2]+a});
                dp[i][1] = std::max({dp[i][1], dp[i-1][0]+b, dp[i-1][2]+b});
                dp[i][2] = std::max({dp[i][2], dp[i-1][1]+c, dp[i-1][0]+c});
        }

        printf("%d
", *std::max_element(dp[n].begin(), dp[n].end()));
        return 0;
}
