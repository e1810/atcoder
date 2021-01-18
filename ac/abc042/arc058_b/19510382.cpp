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
	int h, w, a, b;
	scanf("%d %d %d %d", &h, &w, &a, &b);
	combinit();
	ll ans = 0;
	REP(i, 0, h-a){
		ll t = comb(i+b-1, i) * comb(h-i-2+w-b, w-b-1) % MOD;
		ans = (ans + t) % MOD;
	}
	printf("%ld
", ans);
	return 0;
}
