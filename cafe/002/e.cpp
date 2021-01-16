#include<bits/stdc++.h>
#define REP(i,b,e) for(int i=b;i<e;i++)
using ll = int_fast64_t;

int main(){
	ll n;
	scanf("%lld", &n);
	ll a[n];
	REP(i, 0, n) scanf("%lld", &a[i]);
	
	ll q;
	scanf("%lld", &q);

	ll xord[n+1] = {};
	while(q--){
		ll t, l, r, x;
		scanf("%lld %lld %lld %lld", &t, &l, &r, &x);
		l--, r--;
		if(t==0) xord[l] = xord[r+1] = x;
		else{
			ll max = 0;
			REP(i, 1, n+1) xord[i] ^= xord[i-1];
			REP(i, 0, n) a[i] ^= xord[i];
			REP(i, 0, n+1) xord[i] = 0;
			REP(i, l, r+1) max = std::max(max, a[i]);
			printf("%lld\n", max);
		}
	}
	return 0;
}
		
