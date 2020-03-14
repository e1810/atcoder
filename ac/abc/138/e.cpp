#include<bits/stdc++.h>
using ll = int_fast64_t;
const ll INF = 1e18;

int main(){
	std::string s, t;
	std::cin >> s >> t;
	
	std::vector<std::vector<ll>> alp(26, std::vector<ll>(0));
	ll l = 0;
	for(auto c: s){
		l ++;
		alp[c-'a'].push_back(l);
	}

	for(auto &a: alp){
		if(a.size()) a.push_back(a[0]+l);
		else a.push_back(INF);
	}

	ll h = 0, ans = 0;
	for(auto c: t){
		ll nt = *(std::upper_bound(alp[c-'a'].begin(), alp[c-'a'].end(), h));
		if(nt==INF){
			puts("-1");
			return 0;
		}
		ans += nt-h;
		h = nt%l;
	}
	printf("%ld\n", ans);
	return 0;
}
