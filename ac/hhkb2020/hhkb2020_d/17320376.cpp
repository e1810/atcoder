#include<bits/stdc++.h>
using ll = int_fast64_t;
#define REP(i,b,e) for(ll i=b; i<e; i++)
const int MOD = 1e9+7;

ll wa(ll r){
	return (r * (r+1) % MOD);
}


int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		ll n, a, b;
		scanf("%ld %ld %ld", &n, &a, &b);
		ll posA = ((n-a+1)%MOD) * ((n-a+1)%MOD) % MOD;
		ll posB = ((n-b+1)%MOD) * ((n-b+1)%MOD) % MOD;

		ll x = wa(n-std::max(a, b)) - wa(std::max(n-a-b+2, 1l)-1);
		x += (abs(a-b)+1) * (n-std::max(a,b)+1) % MOD;
		ll ans = (posA * posB)%MOD - (x*x)%MOD;
		ans = (ans + MOD) % MOD;
		printf("%ld
", ans);
	}
	return 0;
}
