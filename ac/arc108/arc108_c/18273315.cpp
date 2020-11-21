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
	std::vector<P> links[n];
	REP(i, 0, m){
		int u, v, c;
		scanf("%d %d %d", &u, &v, &c);
		links[u-1].emplace_back(v-1, c-1);
		links[v-1].emplace_back(u-1, c-1);
	}

	int ans[n] = {};
	std::queue<P> que;
	que.emplace(0, 0);
	while(!que.empty()){
		auto [from, col] = que.front();
		que.pop();
		if(ans[from]!=0) continue;
		ans[from] = col + 1;
		for(auto [to, lbl]: links[from]){
			if(lbl==col) que.emplace(to, (lbl+1)%n);
			else que.emplace(to, lbl);
		}
	}

	REP(i, 0, n) printf("%d
", ans[i]);
	return 0;
}
