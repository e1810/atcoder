#include<bits/stdc++.h>
using ll = int_fast64_t;
using P = std::pair<ll,ll>;

int main(){
	ll n, q;
	scanf("%ld %ld", &n, &q);
	
	std::vector<std::vector<ll>> links(n, std::vector<ll>(0));
	for(ll i=0; i<n-1; i++){
		ll a, b;
		scanf("%ld %ld", &a, &b);
		links[a-1].push_back(b-1);
		links[b-1].push_back(a-1);
	}
	
	std::vector<ll> cost(n);
	for(ll i=0; i<q; i++){
		ll p, x;
		scanf("%ld %ld", &p, &x);
		cost[p-1] += x;
	}
	
	std::queue<P> que;
	que.push(P(0,0));
	std::vector<bool> used(n, 0);
	while(!que.empty()){
		P p = que.front(); que.pop();
		used[p.first] = 1;
		cost[p.first] += p.second;
		for(ll apex: links[p.first]){
			if(!used[apex]) que.push(P(apex, cost[p.first]));
		}
	}
	
	for(ll i=0; i<n; i++) printf("%ld\n", cost[i]);
	return 0;
}
