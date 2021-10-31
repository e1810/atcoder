#include<bits/stdc++.h>
using ll = int_fast64_t;

int main(){
	ll x;
	scanf("%ld", &x);
	
	std::map<ll,ll> fs;
	for(ll i=2; i*i<=x; i++){
		while(x%i==0){
			fs[i]++;
			x /= i;
		}
	}
	if(x>1) fs[x]++;

	ll s = 1;
	for(auto p: fs) s *= p.second + 1;

	
	ll ans = 1;
	for(auto p: fs){
		ll tmp = 1;
		for(ll i=1; i<60; i++){
			tmp *= p.first;
			if(p.second == s/(p.first+1) *i*(i+1)/2){
				ans *= tmp;
				break;
			}
			if(tmp>1e12 or i==59){
				puts("-1");
				return 0;
			}
		}
	}
	printf("%ld\n", ans);
	return 0;
}
