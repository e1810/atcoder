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
	std::vector<V> a(h, V(w));
	REP(i, 0, h) REP(j, 0, w) scanf("%ld", &a[i][j]);

	std::vector<std::pair<P,P>> ans;
	REP(i, 0, h){
		if(i%2==0){
			REP(j, 0, w-1){
				if(a[i][j]%2){
					ans.emplace_back(P(i,j), P(i,j+1));
					a[i][j]--, a[i][j+1]++;
				}
			}
			if(i<h-1 and a[i][w-1]%2){
				ans.emplace_back(P(i,w-1), P(i+1,w-1));
				a[i][w-1]--, a[i+1][w-1]++;
			}
		}else{
			for(int j=w-1; j>0; j--){
				if(a[i][j]%2){
					ans.emplace_back(P(i,j), P(i,j-1));
					a[i][j]--, a[i][j-1]++;
				}
			}
			if(i<h-1 and a[i][0]%2){
				ans.emplace_back(P(i,0), P(i+1,0));
				a[i][0]--, a[i+1][0]++;
			}
		}
	}
	printf("%ld
", ans.size());
	for(auto pp: ans){
		printf("%ld %ld %ld %ld
", pp.fi.fi+1, pp.fi.se+1, pp.se.fi+1, pp.se.se+1);
	}
	return 0;
}
