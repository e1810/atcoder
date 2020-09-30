#include<bits/stdc++.h>
using ll = int_fast64_t;
#define REP(i,b,e) for(ll i=b; i<e; i++)

int main(){
	int n;
	scanf("%d", &n);
	ll a[n];
	REP(i, 0, n) scanf("%ld", &a[i]);
	std::sort(a, a+n);
	if(a[0]==0){
		puts("0");
		return 0;
	}

	ll x = 1;
	REP(i, 0, n){
		ll nex = x * a[i];
		if(__builtin_smull_overflow(x, a[i], &nex)){
			puts("-1");
			return 0;
		}else if(nex>ll(1e18)){
			puts("-1");
			return 0;
		}else x = nex;
	}
	printf("%ld
", x);
	return 0;
}
