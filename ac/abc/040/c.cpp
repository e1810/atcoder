#include<bits/stdc++.h>
using ll = int_fast64_t;

int main(){
	ll n;
	scanf("%ld", &n);
	std::vector<ll> a(n);
	for(ll i=0; i<n; i++) scanf("%ld", &a[i]);

	std::vector<ll> dp(n, 1e18);
	dp[0] = 0;
	for(ll i=1; i<n; i++){
		if(i-2>=0) dp[i] = std::min(dp[i], dp[i-2]+abs(a[i-2]-a[i]));
		if(i-1>=0) dp[i] = std::min(dp[i], dp[i-1]+abs(a[i-1]-a[i]));
	}

	printf("%ld\n", dp[n-1]);
	return 0;
}


