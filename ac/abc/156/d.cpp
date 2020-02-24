#include<bits/stdc++.h>
using ll = std::int_fast64_t;
const ll MOD = 1000000007;

ll inv(ll a){
	ll b = MOD, u = 1, v = 0;
	while(b){
		ll t = a/b;
		a -= t*b; std::swap(a, b);
		u -= t*v; std::swap(u, v);
	}
	u %= MOD;
	if(u<0) u += MOD;
	return u;
}

int main(){
	ll n, a, b;
	scanf("%ld %ld %ld", &n, &a, &b);
	
	ll ans = 1, p = 2, m = n;
	while(m>0){
		if(m&1) ans = ans * p %MOD;
		p = p * p % MOD;
		m >>= 1;
	}
	ans --;

	std::vector<ll> comb(2e5+1);
	comb[0] = 1;	
	for(ll i=1; i<=2e5; i++){
		comb[i] = (comb[i-1] * (n-i+1) % MOD) * inv(i) % MOD;
	}
	
	ans -= comb[a] + comb[b];
	while(ans<0) ans += MOD;
	printf("%ld\n", ans);
	return 0;
}
