#include<bits/stdc++.h>
using ll = long long;
const ll MOD = 1e9+7;

ll modpow(ll a, ll p){
	ll ret = 1;
	while(p){
		if(p&1) ret = ret * a % MOD;
		a = a * a % MOD;
		p >>= 1;
	}
	return ret;
}


int main(){
	ll s, a, b, n;
	scanf("%lld %lld %lld %lld", &s, &a, &b, &n);
	ll z = modpow(++a, n);
	ll x = z * s % MOD;
	ll y = b * (z-1) % MOD * modpow(a-1, MOD-2) % MOD;
	printf("%lld\n", (x+y)%MOD);
	return 0;
}
