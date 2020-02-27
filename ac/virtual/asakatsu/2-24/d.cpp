#include<bits/stdc++.h>
using lint = int_fast64_t;
const lint MOD = 1e9+7;

lint pow(lint n, lint m){
	lint ret = 1;
	while(m){
		if(m&1) ret = ret * n % MOD;
		ret %= MOD;
		n = n * n % MOD;
		m >>= 1;
	}
	return ret;
}

	
int main(){
	lint n, a, b;
	scanf("%ld %ld %ld", &n, &a, &b);
	
	lint ans = pow(2, n)-1;
	std::vector<lint> comb(2e5+1);
	comb[0] = 1;
	for(lint i=1; i<=2e5; i++){
		comb[i] = (comb[i-1] * (n-i+1))%MOD * pow(i, MOD-2) %MOD;
	}

	ans -= comb[a] + comb[b];
	while(ans<0) ans += MOD;
	printf("%ld\n", ans);
	return 0;
}
