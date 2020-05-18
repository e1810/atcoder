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
	int n, c;
	scanf("%d %d", &n, &c);
	V a(n);
	SCAN(a);

	int ans = 1e9;
	REP(i, 1, 11) REP(j, i+1, 11) {
		int x=0, y=0;
		REP(k, 0, n){
			if(k%2){
				if(a[k]!=i) x += c;
				if(a[k]!=j) y += c;
			}else{
				if(a[k]!=j) x += c;
				if(a[k]!=i) y += c;
			}
		}
		ans = std::min({ans, x, y});
	}
	printf("%d
", ans);
	return 0;
}
