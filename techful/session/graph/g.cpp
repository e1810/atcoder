#include<bits/stdc++.h>
#define REP(i,b,e) for(int i=(b);i<(e);i++)
using ll = int_fast64_t;
using P = std::pair<ll,ll>;

int main(){
	int n, m, k;
	scanf("%d %d %d", &n, &m, &k);

	std::vector<P> links[3*n];
	REP(i, 0, m){
		int a, b, c;
		scanf("%d %d %d", &a, &b, &c);
		links[a-1].emplace_back(b-1, c);
		links[b-1].emplace_back(a-1, c);
		links[2*n + a-1].emplace_back(2*n + b-1, c);
		links[2*n + b-1].emplace_back(2*n + a-1, c);
	}
	REP(i, 0, k){
		int a, b, c;
		scanf("%d %d %d", &a, &b, &c);
		links[n + a-1].emplace_back(n + b-1, c);
		links[n + b-1].emplace_back(n + a-1, c);
	}

	REP(i, 0, n){
		links[i].emplace_back(n + i, 0);
		links[n + i].emplace_back(2*n + i, 0);
	}

	ll dist[3*n];
	REP(i, 0, 3*n) dist[i] = 1e18;
	std::priority_queue<P, std::vector<P>, std::greater<P>> que;
	que.emplace(0, 0);
	while(!que.empty()){
		int d, now;
		std::tie(d, now) = que.top();
		que.pop();
		if(dist[now] < d) continue;
		dist[now] = d;
		for(P p: links[now]){
			if(d + p.second <= dist[p.first]){
				que.emplace(d+p.second, p.first);
			}
		}
	}

	ll ans = std::min(dist[n-1], dist[3*n-1]);
	if(ans >= 1e18) puts("-1");
	else printf("%ld\n", ans);
	return 0;
}

