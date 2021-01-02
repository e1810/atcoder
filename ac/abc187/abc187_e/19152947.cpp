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
	int n;
	scanf("%d", &n);
	P edges[n-1];
	std::vector<int> links[n];
	REP(i, 0, n-1){
		int a, b;
		scanf("%d %d", &a, &b);
		edges[i] = P(a-1, b-1);
		links[a-1].push_back(b-1);
		links[b-1].push_back(a-1);
	}

	int dist[n] = {};
	std::queue<P> que;
	que.emplace(0, 1);
	while(!que.empty()){
		auto [from, d] = que.front();
		que.pop();
		if(dist[from]!=0) continue;
		dist[from] = d;
		for(int to: links[from]){
			if(dist[to]==0) que.emplace(to, d+1);
		}
	}

	int q;
	scanf("%d", &q);
	ll alladd = 0, subs[n] = {};
	while(q--){
		int t, e, x;
		scanf("%d %d %d", &t, &e, &x);
		if(t==1){
			if(dist[edges[e-1].fi]<dist[edges[e-1].se]){
				alladd += x;
				subs[edges[e-1].se] -= x;
			}else subs[edges[e-1].fi] += x;
		}else{
			if(dist[edges[e-1].fi]>dist[edges[e-1].se]){
				alladd += x;
				subs[edges[e-1].fi] -= x;
			}else subs[edges[e-1].se] += x;
		}
	}
	//REP(i, 0, n) printf("%ld ", subs[i]); printf("%ld
", alladd);
	//REP(i, 0, n) printf("%ld ", subs[i]+alladd); puts("");

	ll ans[n] = {};
	bool used[n] = {};
	que.emplace(0, 0);
	while(!que.empty()){
		auto [from, w] = que.front();
		que.pop();
		if(used[from]) continue;
		used[from] = true;
		w += subs[from];
		ans[from] = w;
		for(int to: links[from]){
			if(!used[to]) que.emplace(to, w);
		}
	}
	REP(i, 0, n) printf("%ld
", ans[i]+alladd);
	return 0;
}
