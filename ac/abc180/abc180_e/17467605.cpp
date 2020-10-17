#include<bits/stdc++.h>
using ll = int_fast64_t;
#define REP(i,b,e) for(int i=b; i<e; i++)

ll dp[200000][20];

int main(){
    ll n;
    scanf("%ld", &n);
    ll x[n], y[n], z[n];
    REP(i, 0, n) scanf("%ld %ld %ld", &x[i], &y[i], &z[i]);

    REP(i, 0, 1<<n) REP(j, 0, n) dp[i][j] = 1e18;
    dp[1][0] = 0;
    REP(i, 0, 1<<n){
        REP(j, 0, n) if((i>>j)&1) {
            REP(k, 0, n){
                ll nx = i | (1<<k);
                ll nc = dp[i][j] + labs(x[k]-x[j]) + labs(y[k]-y[j]) + std::max(z[k]-z[j], 0l);
                dp[nx][k] = std::min(dp[nx][k], nc);
            }
        }
    }
    printf("%ld
", dp[(1<<n)-1][0]);
    return 0;
}
