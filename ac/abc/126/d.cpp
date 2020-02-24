#include<bits/stdc++.h>
using ll = int_fast64_t;
using Edge = std::pair<ll,ll>;
#define to first
#define cost second

int main(){
	ll n;
	scanf("%ld", &n);
	
	std::vector<std::vector<Edge>> links(n, std::vector<Edge>(0));
	for(ll i=0; i<n-1; i++){
		ll a, b, c;
		scanf("%ld %ld %ld", &a, &b, &c);
		links[a-1].push_back(Edge(b-1, c));
		links[b-1].push_back(Edge(a-1, c));
	}
	
	std::vector<ll> color(n), used(n, 0);
	color[0] = 1;
	
	std::queue<Edge> que;
	que.push(Edge(0, 0));
	while(!que.empty()){
		ll from = que.front().first;
		que.pop();
		used[from] = 1;
		for(Edge p: links[from]){
			if(used[p.to]) continue;
			que.push(p);
			color[p.to] = color[from] ^ p.cost%2;
		}
	}

	for(ll i: color) printf("%ld\n", i);
	return 0;
}
			
