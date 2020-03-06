#include<bits/stdc++.h>
using ll = int_fast64_t;
using P = std::pair<ll,ll>;


int main(){
	ll n;
	scanf("%ld", &n);
	
	std::vector<std::vector<P>> xys(n, std::vector<P>(0));
	for(ll i=0; i<n; i++){
		ll a;
		scanf("%ld", &a);
		for(ll j=0; j<a; j++){
			ll x, y;
			scanf("%ld %ld", &x, &y);
			xys[i].push_back(P(x-1, y));
		}
	}

	ll ans = 0;
	for(ll i=0; i<(1<<n); i++){
		std::vector<bool> honest(n, 0), unkind(n, 0);
		ll cnt = 0;
		for(ll j=0; j<n; j++){
			if((i>>j)&1){
				if(unkind[j]) cnt = -1e18;
				cnt ++;
				honest[j] = true;
				for(P p: xys[j]){
					if(p.second){
						if(unkind[p.first]) cnt = -1e18;
						honest[p.first] = true;
					}else{
						if(honest[p.first]) cnt = -1e18;
						unkind[p.first] = true;
					}
				}
			}else{
				if(honest[j]) cnt = -1e18;
				unkind[j] = true;
			}
		}
		ans = std::max(ans, cnt);
	}

	printf("%ld\n", ans);
	return 0;
}
