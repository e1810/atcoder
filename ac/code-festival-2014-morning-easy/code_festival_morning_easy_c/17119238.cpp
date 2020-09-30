#include<bits/stdc++.h>
using ll = int_fast64_t;
using P = std::pair<ll,ll>;
using PP = std::pair<ll,P>;

#define REP(i,b,e) for(ll i=b; i<e; i++)
#define ALL(vec) vec.begin(),vec.end()
#define PRINT(vec) printf("[ ");for(auto &i:vec)printf("%ld ",i);puts("]");
#define SCAN(vec) for(auto &i:vec)scanf("%ld",&i)
#define fi first
#define se second

int main(){
	int n, m, st, gl;
	scanf("%d %d %d %d", &n, &m, &st, &gl);
	std::vector<P> links[n];
	REP(i, 0, m){
		int a, b, c;
		scanf("%d %d %d", &a, &b, &c);
		links[a-1].emplace_back(b-1, c);
		links[b-1].emplace_back(a-1, c);
	}

	int dist0[n], dist1[n];
	std::priority_queue<P> que;
	std::fill_n(dist0, n, 1e9);
	que.emplace(0, st-1);
	while(!que.empty()){
		auto [d, from] = que.top();
		que.pop();
		if(dist0[from]<d) continue;
		for(auto [to, cost]: links[from]){
			if(dist0[to]<d+cost) continue;
			dist0[to] = d + cost;
			que.emplace(d+cost, to);
		}
	}
	dist0[st-1] = 0;

	std::fill_n(dist1, n, 1e9);
	que.emplace(0, gl-1);
	while(!que.empty()){
		auto [d, from] = que.top();
		que.pop();
		if(dist1[from]<d) continue;
		for(auto [to, cost]: links[from]){
			if(dist1[to]<d+cost) continue;
			dist1[to] = d + cost;
			que.emplace(d+cost, to);
		}
	}
	dist1[gl-1] = 0;

	int ans = -1;
	REP(i, 0, n) if(i!=st-1 and i!=gl-1) {
		if(dist0[i]==1e9 or dist1[i]==1e9) continue;
		if(dist0[i]==dist1[i]) ans = i+1;
	}
	printf("%d
", ans);
	return 0;
}
