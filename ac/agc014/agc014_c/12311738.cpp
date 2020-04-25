#pragma target("avx")
#include<bits/stdc++.h>
using ll = int_fast64_t;
using P = std::pair<ll,ll>;
using PP = std::pair<ll, P>;
using V = std::vector<ll>;
template<typename T> using pq = std::priority_queue<T>;
template<typename T> using rpq = std::priority_queue<T, std::vector<T>, std::greater<T>>;

#define rep(i,b,e) for(ll i=b; i<e; i++)
#define be(vec) vec.begin(),vec.end()
#define print(vec) printf("[ ");for(auto &i:vec)printf("%ld ",i);puts("]");
#define scan(vec) for(auto &i:vec)scanf("%ld",&i)
#define fi first
#define se second

const int MOD = 1e9+7;
const ll INF = 1e18;
int dx[] = {0, 1, 0, -1, 1, 1, -1, -1}, dy[] = {1, 0, -1, 0, 1, -1, -1, 1};

int main(){
	int h, w, k;
	scanf("%d %d %d", &h, &w, &k);
	int sx, sy;
	bool fie[h][w];
	getchar();
	rep(i, 0, h){
		rep(j, 0, w){
			char c = getchar();
			if(c=='S') sx=i, sy=j;
			fie[i][j] = (c=='#');
		}
		getchar();
	}

	ll ans = 1e18;
	std::queue<PP> que;
	que.emplace(0, P(sx, sy));
	while(!que.empty()){
		ll d = que.front().fi;
		P p = que.front().se;
		que.pop();
		if(fie[p.fi][p.se]) continue;
		fie[p.fi][p.se] = true;
		ll cost = std::min({p.fi, h-p.fi-1, p.se, w-p.se-1});
		ans = std::min(ans, std::max(1l,(d+k-1)/k) + (cost+k-1)/k);
		if(cost==0) continue;
		rep(i, 0, 4){
			ll nx = p.fi+dx[i], ny = p.se+dy[i];
			if(!fie[nx][ny]) que.emplace(d+1, P(nx, ny));
		}
	}
	printf("%ld
", ans);
	return 0;
}
