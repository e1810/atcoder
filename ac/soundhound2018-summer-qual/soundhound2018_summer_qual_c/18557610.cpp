#include<bits/stdc++.h>
using ll = int_fast64_t;
const int MOD = 1e9+7;

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
	ll n, m, d;
	scanf("%ld %ld %ld", &n, &m, &d);
	double ans = (n-d) / (double)(n*n) * (m-1);
	printf("%lf
", (1+!!d) * ans);
	return 0;
}
