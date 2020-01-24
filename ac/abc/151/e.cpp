#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MOD = 1e9 + 7;

int main(){
	ll n, k; scanf("%lld %lld", &n, &k);
	vector<ll> big(n);
	for(ll i=0; i<n; i++) scanf("%lld", &big[i]);
	vector<ll> lit(big);
	sort(big.begin(), big.end(), greater<ll>());
	sort(lit.begin(), lit.end());

	ll ans = 0;
	for(ll i=0; i<=n-k; i++){
		printf("%lld %lld: ", big[i], lit[i]);
		ll add = (big[i] * ((n-i-2)*(n-i-1)/2)%MOD)%MOD;
		if(add<0) add += MOD;
		ll sub = (lit[i] * ((n-i-2)*(n-i-1)/2)%MOD)%MOD;
		if(sub<0) sub += MOD;
		ans += (add - sub)%MOD;
		if(ans<0) ans += MOD;
		printf("%lld %lld %lld\n", add, sub, ans);
		ans %= MOD;
	}
	printf("%lld\n", ans);
	return 0;
}

