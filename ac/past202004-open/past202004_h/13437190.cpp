#pragma target("avx")
#include<bits/stdc++.h>
using ll = int_fast64_t;
using P = std::pair<ll,ll>;
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
	int n, m;
	scanf("%d %d", &n, &m);
	ll ans[n][m];
	std::vector<P> coo[11];
	REP(i, 0, n) std::fill_n(ans[i], m, 1e9);
	REP(i, 0, n){
		getchar();
		REP(j, 0, m){
		       char c = getchar();
		       if(c=='S'){
			       ans[i][j] = 0;
			       coo[0].emplace_back(i, j);
		       }else if(c=='G') coo[10].emplace_back(i, j);
		       else coo[c-'0'].emplace_back(i, j);
		}
	}

	auto disti = [](P x, P y){
		return labs(x.fi-y.fi) + labs(x.se-y.se);
	};
	
	REP(i, 1, 11){
		for(P from: coo[i-1]){
			for(P to: coo[i]){
				ans[to.fi][to.se] = std::min(ans[to.fi][to.se], ans[from.fi][from.se]+disti(from, to));
			}
		}
	}
	
	ll x = ans[coo[10][0].fi][coo[10][0].se];
	if(x==1e9) puts("-1");
	else printf("%ld
", x);
	return 0;
}
