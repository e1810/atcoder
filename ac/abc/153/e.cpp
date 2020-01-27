#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll,ll>;

int main(){
	ll h, n;
	scanf("%lld %lld", &h, &n);
	vector<ll> value(n), weight(n);
	for(ll i=0; i<n; i++) scanf("%lld %lld", &weight[i], &value[i]);

	vector<ll> dp(300000, 1e18);
	dp[0] = 0;
	for(ll i=0; i<n; i++){
		for(ll j=0; j<=300000; j++){
			if(0<=j-weight[i]) dp[j] = min(dp[j], dp[j-weight[i]]+value[i]);
		}
	}
	ll ans = 1e18;
	for(ll i=h; i<300000; i++) ans = min(ans, dp[i]);
	printf("%lld\n", ans);
	return 0;
}

