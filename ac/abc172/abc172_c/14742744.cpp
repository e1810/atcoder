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
	ll n, m, k;
	scanf("%ld %ld %ld", &n, &m, &k);
	V a(1+n, 0), b(1+m, 0);
	REP(i, 1, n+1) scanf("%ld", &a[i]);
	REP(i, 1, m+1) scanf("%ld", &b[i]);
	REP(i, 0, n) a[i+1] += a[i];
	REP(i, 0, m) b[i+1] += b[i];

	ll ans = 0;
	REP(i, 0, n+1){
		if(a[i]>k) break;
		ll pos = std::upper_bound(ALL(b), k-a[i]) - b.begin();
		ans = std::max(ans, i+pos-1);
	}
	printf("%ld
", ans);
	return 0;
}
