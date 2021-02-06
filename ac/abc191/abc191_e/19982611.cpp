#include<bits/stdc++.h>
using ll = int_fast64_t;
using P = std::pair<ll,ll>;
using PP = std::pair<ll,P>;

#define REP(i,b,e) for(int i=b; i<e; i++)
#define PRINT(vec) {printf("[ ");for(auto &i:vec)printf("%ld ",i);puts("]");}
#define fi first
#define se second

const int MOD = 1e9+7;
int dx[] = {0, 1, 0, -1, 1, 1, -1, -1}, dy[] = {1, 0, -1, 0, 1, -1, -1, 1};

int main(){
	int n, m;
	scanf("%d %d", &n, &m);

	ll loop[n] = {};
	REP(i, 0, n) loop[i] = 1e18;
	std::vector<P> links[n], blinks[n];
	REP(i, 0, m){
		ll a, b, c;
		scanf("%ld %ld %ld", &a, &b, &c);
		links[a-1].emplace_back(b-1, c);
		blinks[b-1].emplace_back(a-1, c);
		if(a==b) loop[a-1] = std::min(loop[a-1], c);
	}


	ll dist[n][n], used[n][n] = {};
	REP(i, 0, n) REP(j, 0, n) dist[i][j] = 1e18;
	REP(st, 0, n){
		std::priority_queue<P, std::vector<P>, std::greater<P>> que;
		que.emplace(0, st);
		while(!que.empty()){
			auto [d, from] = que.top();
			que.pop();
			if(used[st][from]) continue;
			used[st][from] = true;
			dist[st][from] = d;
			for(auto [to, c]: links[from]){
				if(dist[st][to] <= dist[st][from] + c) continue;
				que.emplace(d + c, to);
			}
		}
	}

	ll bdist[n][n];
	REP(i, 0, n) REP(j, 0, n) bdist[i][j] = 1e18;
	REP(i, 0, n) REP(j, 0, n) used[i][j] = false;;
	REP(st, 0, n){
		std::priority_queue<P, std::vector<P>, std::greater<P>> que;
		que.emplace(0, st);
		while(!que.empty()){
			auto [d, from] = que.top();
			que.pop();
			if(used[st][from]) continue;
			used[st][from] = true;
			bdist[st][from] = d;
			for(auto [to, c]: blinks[from]){
				if(bdist[st][to] <= bdist[st][from] + c) continue;
				que.emplace(d + c, to);
			}
		}
	}

	REP(i, 0, n){
		ll ans = loop[i];
		REP(j, 0, n) if(i!=j) {
			ans = std::min(ans, dist[i][j] + bdist[i][j]);
		}
		if(ans!=1e18) printf("%ld
", ans);
		else puts("-1");
	}
	return 0;
}
