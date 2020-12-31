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
	std::vector<P> links[n];
	REP(i, 0, n-1){
		int a, b, c;
		scanf("%d %d %d", &a, &b, &c);
		links[a-1].emplace_back(b-1, c);
		links[b-1].emplace_back(a-1, c);
	}

	int q, k, used[n] = {};
	scanf("%d %d", &q, &k);
	ll dist[n] = {};
	REP(i, 0, n) dist[i] = 1e18;
	std::queue<P> que;
	que.emplace(k-1, 0);
	while(!que.empty()){
		P p = que.front();
		que.pop();
		used[p.first] = true;
		dist[p.first] = p.second;
		for(P to: links[p.first]){
			if(used[to.first]) continue;
			que.emplace(to.first, p.second+to.second);
		}
	}

	while(q--){
		int x, y;
		scanf("%d %d", &x, &y);
		printf("%ld
", dist[x-1]+dist[y-1]);
	}	
	return 0;
}
