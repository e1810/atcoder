#include<bits/stdc++.h>
using ll = int_fast64_t;
#define REP(i,b,e) for(int i=b; i<e; i++)

const int MOD = 1e9+7;
const int MAX = 2000100;

ll fac[MAX], finv[MAX], inv[MAX];

void combinit(){
	fac[0] = fac[1] = finv[0] = finv[1] = inv[1] = 1;
	REP(i, 2, MAX){
		fac[i] = fac[i-1] * i % MOD;
		inv[i] = MOD - inv[MOD%i] * (MOD/i) % MOD;
		finv[i] = finv[i-1] * inv[i] % MOD;
	}
}

ll comb(int n, int k){
	if(n<k or n<0 or k<0) return 0;
	return fac[n] * (finv[k] * finv[n-k] % MOD) % MOD;
}

int main(){
	int r1, c1, r2, c2;
	scanf("%d %d %d %d", &r1, &c1, &r2, &c2);

	combinit();
	ll ans = 0;
	REP(i, c1, c2+1){
		ll t1 = r2 + 1, t2 = r1;
		t1 = t1 * comb(i+r2+1, i) % MOD;
		t2 = t2 * comb(i+r1, i) % MOD;
		ll tmp = (t1 - t2 + MOD) % MOD;
		ans += tmp * inv[i+1] % MOD;
		ans %= MOD;
	}
	printf("%ld
", ans);
	return 0;
}
