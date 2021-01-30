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
	ll n;
	scanf("%ld", &n);
	ll m = n, cnt = 0;
	while(m){
		cnt++;
		m >>= 1;
	}
	
	bool tl = (cnt&1);
	m = 1, cnt = 0;
	while(m<=n){
		if(cnt&1) m = 2 * m + !tl;
		else m = 2 * m + tl;
		cnt++;
	}
	if(cnt&1) puts("Aoki");
	else puts("Takahashi");
	return 0;
}
