#include<bits/stdc++.h>
using ll = int_fast64_t;
const ll MOD = 1e9+7;

ll inverse(ll x){
	ll v = MOD-2, ret = 1;
	while(v){
		if(v&1) ret = ret * x % MOD;
		x = x*x %MOD;
		v >>= 1;
	}
	return ret;
}

std::vector<ll> fact(1e5), inv(1e5);
ll comb2(ll n, ll k){
	if(n<0 or k<0) return 1;
	return (fact[n+k] * inv[n])%MOD * inv[k] %MOD;
}

int main(){
	fact[0] = fact[1] = inv[0] = inv[1] = 1;
	for(ll i=2; i<1e5; i++){
		fact[i] = fact[i-1] * i % MOD;
		inv[i] = inverse(fact[i]);
	}
	
	ll h, w, a, b;
	scanf("%ld %ld %ld %ld", &h, &w, &a, &b);
	
	ll ans = 0;
	for(ll i=b+1; i<=w; i++){
		printf("%ld %ld\n", comb2(h-a-1, i-1), comb2(a-1, w-i-1));
		ans += comb2(h-a-1, i-1) * comb2(a-1, w-i-1) % MOD;
		ans %= MOD;
	}
	printf("%ld\n", ans);
	return 0;
}
