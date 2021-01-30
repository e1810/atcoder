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
	std::vector<int> links[n];
	REP(i, 0, m){
		int a, b;
		scanf("%d %d", &a, &b);
		links[a-1].push_back(b-1);
		links[b-1].push_back(a-1);
	}
	int k;
	scanf("%d", &k);
	int c[k], id[n] = {};
	REP(i, 0, k){
		scanf("%d", &c[i]);
		id[c[i]-1] = i + 1;
	}

	ll dist[k][k];
	REP(i, 0, k) REP(j, 0, k) dist[i][j] = 1e18;
	REP(st, 0, n) if(id[st]) {
		bool used[n] = {};
		std::queue<P> que;
		que.emplace(st, 0);
		while(!que.empty()){
			auto [from, d] = que.front(); que.pop();
			if(used[from]) continue;
			used[from] = true;
			if(id[from]) dist[id[st]-1][id[from]-1] = d;
			for(auto to: links[from]) que.emplace(to, d+1);
		}
	}

	REP(K, 0, k) REP(i, 0, k) REP(j, 0, k) {
		dist[i][j] = std::min(dist[i][j], dist[i][K] + dist[K][j]);
	}

	ll dp[1<<k][k], ans = 1e18;
	REP(st, 0, k){
		REP(i, 0, 1<<k) REP(j, 0, k) dp[i][j] = 1e18;
		dp[0][st] = 0;
		REP(i, 0, 1<<k) REP(j, 0, k) {
			REP(K, 0, k){
				dp[i|(1<<K)][K] = std::min(dp[i|(1<<K)][K], dp[i][j]+dist[j][K]);
			}
		}
		REP(i, 0, k) ans = std::min(ans, dp[(1<<k)-1][i]);
	}
	if(ans>=1e18) puts("-1");
	else printf("%ld
", ans+1);
	return 0;
}
