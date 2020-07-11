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
	int n, m;
	scanf("%d %d", &n, &m);
	char c = getchar();
	int need[26] = {};
	while((c=getchar())!='
') need[c-'A']++;
	int given[26] = {};
	while((c=getchar())!='
') given[c-'A']++;
	
	int ans = 0;
	REP(i, 0, 26){
		if(given[i]==0){
			if(need[i]>0){
				puts("-1");
				return 0;
			}else continue;
		}
		ans = std::max(ans, (need[i]+given[i]-1)/given[i]);
	}
	printf("%d
", ans);
	return 0;
}
