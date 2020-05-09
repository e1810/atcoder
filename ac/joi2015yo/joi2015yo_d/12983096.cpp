#include<bits/stdc++.h>
using ll = int_fast64_t;

int main(){
        int n, m;
        scanf("%d %d", &n, &m);
        int d[n], c[m];
        for(int i=0; i<n; i++) scanf("%d", &d[i]);
        for(int i=0; i<m; i++) scanf("%d", &c[i]);

        ll dp[1+m][1+n];
        for(int i=0; i<=m; i++) std::fill_n(dp[i], 1+n, 1e10);
        dp[0][0] = 0;

        for(int i=0; i<m; i++){
                for(int j=0; j<=n; j++){
                        dp[i+1][j] = std::min(dp[i+1][j], dp[i][j]);
                        if(j<n) dp[i+1][j+1] = std::min(dp[i+1][j+1], dp[i][j] + d[j] * c[i]);
                }
        }
        printf("%ld
", dp[m][n]);
        return 0;
}
