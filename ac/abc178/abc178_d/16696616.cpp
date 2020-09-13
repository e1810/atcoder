#include<bits/stdc++.h>
using ll = int_fast64_t;
#define REP(i,b,e) for(ll i=b; i<e; i++)

const int MOD = 1e9+7;
const int MAX = 510000;
ll fac[MAX], finv[MAX], inv[MAX];

void COMinit() {
    fac[0] = fac[1] = 1;
    finv[0] = finv[1] = 1;
    inv[1] = 1;
    for (int i = 2; i < MAX; i++){
        fac[i] = fac[i - 1] * i % MOD;
        inv[i] = MOD - inv[MOD%i] * (MOD / i) % MOD;
        finv[i] = finv[i - 1] * inv[i] % MOD;
    }
}

ll COM(ll n, ll k){
    if (n < k) return 0;
    if (n < 0 || k < 0) return 0;
    return fac[n] * (finv[k] * finv[n - k] % MOD) % MOD;
}

int main(){
	ll n;
	scanf("%ld", &n);
	COMinit();
	ll ans = 0;
	for(ll i=1; ; i++){
		ll x = n - 3*i;
		if(x<0) break;
		ans += COM(x+1+i-1-1, i-1);
		ans %= MOD;
	}
	printf("%ld
", ans);
	return 0;
}
