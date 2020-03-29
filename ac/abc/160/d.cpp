#include<bits/stdc++.h>
using ll = int_fast64_t;
using P = std::pair<ll,ll>;

int main(){
	ll n, x, y;
	scanf("%ld %ld %ld", &n, &x, &y);
	
	std::vector<std::vector<ll>> links(n, std::vector<ll>(0));
	for(ll i=1; i<n; i++){
		links[i-1].push_back(i);
		links[i].push_back(i-1);
	}
	links[x-1].push_back(y-1);
	links[y-1].push_back(x-1);
	
	std::vector<ll> ans(n, 0);
	for(ll i=0; i<n; i++){
		std::vector<int> dist(n, 1e5), used(n, 0);
		std::queue<P> que;
		que.push(P(i, 0));
		while(!que.empty()){
			int v, dis;
			std::tie(v, dis) = que.front();
			que.pop();
			used[v] = 1;
			for(ll to: links[v]){
				if(!used[to]){
					dist[to] = std::min(dist[to], dis);
					que.push(P(to, dis+1));
				}
			}
		}
		for(ll j=0; j<n; j++){
			if(dist[j]!=1e5) ans[dist[j]]++;
		}
	}
	for(ll i=0; i<n-1; i++) printf("%ld\n", ans[i]/2);
	return 0;
}
