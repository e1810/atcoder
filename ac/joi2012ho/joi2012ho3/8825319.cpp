
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;

int main(){
        ll n, t, s;
        scanf("%lld %lld %lld", &n, &t, &s);

        ll value[n], weight[n];
        for(ll i=0; i<n; i++) scanf("%lld %lld", &value[i], &weight[i]);

        ll dp[n+1][s+1];
        for(ll i=0; i<=n; i++)for(ll j=0; j<=s; j++)dp[i][j]=0;
        for(ll i=0; i<n; i++){
                for(ll j=0; j<=s; j++){
                        if(j-weight[i]<0) dp[i+1][j] = max(dp[i+1][j], dp[i][j]);
                        else dp[i+1][j] = max({dp[i+1][j], dp[i][j], dp[i][j-weight[i]]+value[i]});
                }
        }

        //for(ll i=0; i<=n; i++){for(ll j=0; j<=s; j++)printf("%lld ", dp[i][j]);puts("");}


        ll dp2[n+1][t-s+1];
        for(ll i=0; i<=n; i++)for(ll j=0; j<=t-s; j++)dp2[i][j]=0;
        for(ll i=n; i>=0; i--){
                for(ll j=0; j<=t-s; j++){
                        if(j-weight[i-1]<0) dp2[i-1][j] = max(dp2[i-1][j], dp2[i][j]);
                        else dp2[i-1][j] = max({dp2[i-1][j], dp2[i][j], dp2[i][j-weight[i-1]]+value[i-1]});
                }
        }

        //for(ll i=0; i<=n; i++){for(ll j=0; j<=t-s; j++)printf("%lld ", dp2[i][j]);puts("");}

        ll ans = dp2[0][t-s];
        for(ll i=0; i<n-1; i++) ans = max(ans, dp[i][s] + dp2[i][t-s]);
        printf("%lld
", ans);

        return 0;
}
