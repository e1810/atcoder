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
	V a(n);
	SCAN(a);

	int ans = -1e9;
	REP(i, 0, n){
		int aokimax = -1e9, thentkhs;
		REP(j, 0, n) if(i!=j) {
			int tkhs=0, aoki=0, I=std::min(i,j), J=std::max(i,j);
			REP(k, I, J+1){
				if((k-I)%2) aoki += a[k];
				else tkhs += a[k];
			}
			if(aokimax<aoki){
				aokimax = aoki;
				thentkhs = tkhs;
			}
		}
		ans = std::max(ans, thentkhs);
	}
	printf("%d
", ans);
	return 0;
}
