
#pragma target("avx")
#include<bits/stdc++.h>
using ll = int_fast64_t;
const int MOD = 1e9+7;

struct Combination{
	std::vector<ll> fac, finv, inv;

	Combination(int max=6e5): fac(max+1), finv(max+1), inv(max+1) {
		fac[0] = fac[1] = finv[0] = finv[1] = inv[1] = 1;
		for(int i=2; i<=max; i++){
			fac[i] = fac[i-1] * i % MOD;
			inv[i] = MOD - inv[MOD%i] * (MOD/i) % MOD;
			finv[i] = finv[i-1] * inv[i] % MOD;
		}
	}

	ll C(int n, int r) const {
		if(n<0 or n<r) return 0;
		return fac[n] * (finv[r] * finv[n-r] % MOD) % MOD;
	}
};

int main(){
	int x, y;
	scanf("%d %d", &x, &y);
	if((x+y)%3 or x*2<y or x>y*2) puts("0");
	else{
		Combination com(666666);
		printf("%ld
", com.C((x+y)/3, (2*x-y)/3));
	}
	return 0;
}
