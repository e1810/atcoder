#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll d, n;
	scanf("%lld %lld", &d, &n);
	ll t[d];
	for(ll i=0; i<d; i++) scanf("%lld", &t[i]);
	ll low[n], high[n], c[n];
	for(ll i=0; i<n; i++) scanf("%lld %lld %lld", &low[i], &high[i], &c[i]);


	ll dp[d][n];
	for(ll j=0; j<n; j++) if(low[j]<=t[0] && t[0]<=high[j]) dp[0][j]=0; else dp[0][j] = -1e11;
	for(ll i=1; i<d; i++)for(ll j=0; j<n; j++)dp[i][j]=0;

	for(ll i=1; i<d; i++){
		for(ll j=0; j<n; j++){
			if(low[j]<=t[i] && t[i]<=high[j]){
				for(ll k=0; k<n; k++){
					dp[i][j] = max(dp[i][j], dp[i-1][k] + abs(c[k]-c[j]));
				}
			}
			else dp[i][j] = -1e11;
		}
	}
	
	//for(ll i=0; i<d; i++){for(ll j=0; j<n; j++) printf("%lld ", dp[i][j]);puts("");}

	ll ans = 0;
	for(ll i=0; i<n; i++) ans = max(ans, dp[d-1][i]);
	printf("%lld\n", ans);
	return 0;
}
