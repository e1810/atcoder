#include<bits/stdc++.h>
using ll = int_fast64_t;

const int MAX = 1e7;
const int MOD = 1e9+7;

ll fac[MAX], finv[MAX], inv[MAX];

void combinit(){
	fac[0] = fac[1] = finv[0] = finv[1] = inv[1] = 1;
	for(int i=2; i<MAX; i++){
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
	int x, y;
	scanf("%d %d", &x, &y);
	
	if((x+y)%3!=0 or x*2<y or x>y*2){
		puts("0");
		return 0;
	}

	combinit();
	printf("%ld\n", comb((x+y)/3, (2*x-y)/3));
	return 0;
}
	
