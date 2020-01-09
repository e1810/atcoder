#include<bits/stdc++.h>
using ll = long long;

int main(){
	ll n; scanf("%lld", &n);
	std::map<ll, ll> m;
	for(ll i=0; i<n; i++){
		ll tmp; scanf("%lld", &tmp);
		if(m.count(tmp)) m[tmp]++;
		else m[tmp] = 1;
	}
	ll x, y=0;
	for(auto p: m){
		ll k, v;
		std::tie(k, v) = p;
		if(v>y){
			x = k;
			y = v;
		}
	}
	printf("%lld %lld\n", x, y);
	return 0;
}

	
