#include<bits/stdc++.h>
using ll = int_fast64_t;

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
	ll n;
	scanf("%ld", &n);
	printf("%ld\n", modpow(6, n/2, 998244353));
}
