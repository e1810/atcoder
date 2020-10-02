#pragma target("avx")
#pragma optimize("O3")
#include<bits/stdc++.h>
using ll = int_fast64_t;
using P = std::pair<ll,ll>;
#define REP(i,b,e) for(ll i=b; i<e; i++)

int main(){
	ll v1, e1, v2, e2;
	scanf("%ld %ld %ld %ld", &v1, &e1, &v2, &e2);
	ll s, g, l;
	scanf("%ld %ld %ld", &s, &g, &l);
	s--, g--;

	std::vector<ll> links1[v1], links2[v2];
	REP(i, 0, e1){
		ll u, v;
		scanf("%ld %ld", &u, &v);
		links1[u-1].push_back(v-1);
		links1[v-1].push_back(u-1);
	}
	REP(i, 0, e2){
		ll u, v;
		scanf("%ld %ld", &u, &v);
		links2[u-1].push_back(v-1);
		links2[v-1].push_back(u-1);
	}

	std::queue<P> que;
	ll dist1[v1] = {}, used1[v1] = {};
	que.emplace(s, 0);
	while(!que.empty()){
		auto [from, d] = que.front();
		que.pop();
		if(used1[from]) continue;
		used1[from] = true;
		dist1[from] = d;
		for(auto to: links1[from]){
			que.emplace(to, d+1);
		}
	}
	ll dist2[v2] = {}, used2[v2] = {};
	que.emplace(g, 0);
	while(!que.empty()){
		auto [from, d] = que.front();
		que.pop();
		if(used2[from]) continue;
		used2[from] = true;
		dist2[from] = d;
		for(auto to: links2[from]){
			que.emplace(to, d+1);
		}
	}
	
	ll ans = 0;
	std::map<ll,ll> mp;
	for(auto x: dist1) mp[x]++;
	for(auto x: dist2) ans += mp[l-x-1];
	printf("%ld\n", ans);

}

