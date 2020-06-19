#pragma target("avx")
#include<bits/stdc++.h>
using ll = int_fast64_t;
using P = std::pair<ll,ll>;
using PP = std::pair<ll,P>;
using V = std::vector<ll>;
template<typename T> using pq = std::priority_queue<T>;
template<typename T> using rpq = std::priority_queue<T, std::vector<T>, std::greater<T>>;

#define REP(i,b,e) for(ll i=b; i<e; i++)
#define ALL(vec) vec.begin(),vec.end()
#define PRINT(vec) printf("[ ");for(auto &i:vec)printf("%ld ",i);puts("]");
#define SCAN(vec) for(auto &i:vec)scanf("%ld",&i)
#define fi first
#define se second

const int MOD = 1e9+7;
const ll INF = 1e18;
int dx[] = {0, 1, 0, -1, 1, 1, -1, -1}, dy[] = {1, 0, -1, 0, 1, -1, -1, 1};

int main(){
	int h, w;
	scanf("%d %d", &h, &w);
	char fie[h][w];
	REP(i, 0, h){
		getchar();
		REP(j, 0, w) fie[i][j] = getchar();
	}

	
	bool used[h][w] = {};
	std::queue<PP> que;

	ll ans = 0;
	REP(i, 0, h) REP(j, 0, w) if(!used[i][j] and fie[i][j]=='#') {
		ll bla = 0, whi = 0;
		que.emplace(0, P(i, j));
		while(!que.empty()){
			auto [d, p] = que.front();
			que.pop();
			if(used[p.fi][p.se]) continue;
			used[p.fi][p.se] = true;
			if(fie[p.fi][p.se]=='#') bla++;
			else whi++;
			REP(I, 0, 4){
				ll nx = p.fi+dx[I], ny = p.se+dy[I];
				if(nx<0 or h<=nx or ny<0 or w<=ny) continue;
				if(used[nx][ny] or fie[p.fi][p.se]==fie[nx][ny]) continue;
				que.emplace(d+1, P(nx, ny));
			}
		}
		ans += bla * whi;
	}
	printf("%ld
", ans);
	return 0;
}
