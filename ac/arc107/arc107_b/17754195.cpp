#include<bits/stdc++.h>
using ll = int_fast64_t;
#define REP(i,b,e) for(ll i=b; i<e; i++)

int main(){
	ll n, k;
	scanf("%ld %ld", &n, &k);
	ll ans = 0;
	REP(ab, 2, 3*n){
		ll cd = ab-k;
		if(cd<2) continue;
		ll l1 = std::max(0l, ab-n), r1 = std::min(ab, 0+n);
		ll l2 = std::max(0l, cd-n), r2 = std::min(cd, 0+n);
		ans += std::max(0l, std::min(ab-1, r1-l1+1)) * std::max(0l, std::min(cd-1, r2-l2+1));
	}
	printf("%ld
", ans);
	return 0;
}
