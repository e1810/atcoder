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
	ll n, k;
	scanf("%ld %ld", &n, &k);
	ll prev, now, ans = 0;
	scanf("%ld", &prev);
	if(prev>k){
		ans += prev-k;
		prev = k;
	}
	REP(i, 1, n){
		scanf("%ld", &now);
		if(prev+now>k){
			if(now>=prev+now-k){
				ans += prev+now-k;
				now -= prev+now-k;
			}else{
				ans += now;
				now = 0;
				ans += prev-k;
			}
		}
		prev = now;
	}
	printf("%ld
", ans);
	return 0;
}
