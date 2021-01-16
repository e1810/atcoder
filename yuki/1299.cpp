#include<bits/stdc++.h>
#define REP(i,b,e) for(int i=b;i<e;i++)
using ll = int_fast64_t;
const ll MOD = 998244353;

ll modpow(ll a, ll p, ll m){
	ll ret = 1;
	while(p){
		if(p&1) ret = ret * a % m;
		a = a * a % m;
		p >>= 1;
	}
	return ret;
}

int main(){
	ll n, k;
    scanf("%lld %lld", &n, &k);
    ll sum = 0;
    REP(i, 0, n){
		ll a;
		scanf("%lld", &a);
		sum = (sum + a) % MOD;
	}

    ll ans = modpow(2, k, MOD);
    ans = ans * sum % MOD;
    printf("%lld\n", ans);
    return 0;
}
