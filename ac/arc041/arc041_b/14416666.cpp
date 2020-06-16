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
	int h, w;
	scanf("%d %d", &h, &w);
	int fie[h][w], ans[h][w];
	REP(i, 0, h){
		getchar();
		REP(j, 0, w){
			fie[i][j] = getchar()-'0';
			ans[i][j] = 0;
		}
	}

	REP(i, 1, h-1) REP(j, 1, w-1) {
		int min = 9;
		REP(k, 0, 4) min = std::min(min, fie[i+dx[k]][j+dy[k]]);
		REP(k, 0, 4) fie[i+dx[k]][j+dy[k]] -= min;
		ans[i][j] += min;
	}
	
	REP(i, 0, h){
		REP(j, 0, w) printf("%d", ans[i][j]);
		putchar('
');
	}
	return 0;
}
