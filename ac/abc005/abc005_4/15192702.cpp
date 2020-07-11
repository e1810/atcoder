#pragma target("avx")
#pragma optimize("O3")
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
	int n;
	scanf("%d", &n);
	int d[1+n][1+n] = {};
	REP(i, 1, n+1) REP(j, 1, n+1) scanf("%d", &d[i][j]);
	REP(i, 1, n+1) REP(j, 0, n+1) d[i][j] += d[i-1][j];
	REP(i, 0, n+1) REP(j, 1, n+1) d[i][j] += d[i][j-1];

	int q;
	scanf("%d", &q);
	while(q--){
		int p;
		scanf("%d", &p);
		ll ans = 0;
		REP(i, 0, n+1) REP(j, 0, n+1){
			REP(k, i+1, n+1){
				ll l = std::min<ll>(n, j + p/(k-i));
				if(l<0) continue;
				ll tmp = d[k][l] - d[k][j] - d[i][l] + d[i][j];
				ans = std::max(ans, tmp);
			}
		}
		printf("%ld
", ans);
	}
	return 0;
}
