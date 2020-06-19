#include<bits/stdc++.h>
using ll = int_fast64_t;
using P = std::pair<ll,ll>;

int main(){	
	ll n, t;
	scanf("%ld %ld", &n, &t);
	std::vector<P> ab(n);
	for(ll i=0; i<n; i++) scanf("%ld %ld", &ab[i].first, &ab[i].second);
	std::sort(ab.begin(), ab.end());
	ll a[n], b[n];
	for(ll i=0; i<n; i++) std::tie(a[i], b[i]) = ab[i];

	ll dp[t+4000] = {};
	for(ll i=0; i<n; i++){
		for(ll j=t+3999; j>=0; j--){
			if(j-a[i]<0 or t<=j-a[i]) continue;
			dp[j] = std::max(dp[j], dp[j-a[i]] + b[i]);
		}
	}

	ll ans = 0;
	for(ll i=0; i<t+4000; i++) ans = std::max(ans, dp[i]);
	printf("%ld
", ans);
	return 0;
}
