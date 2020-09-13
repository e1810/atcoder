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
const ll INF = 1e9;
int dx[] = {0, 1, 0, -1, 1, 1, -1, -1}, dy[] = {1, 0, -1, 0, 1, -1, -1, 1};

int main(){
	int n;
	scanf("%d", &n);
	ll x[n], y[n];
	REP(i, 0, n) scanf("%ld %ld", &x[i], &y[i]);

	ll amin = 1e18, amax = 1;
	ll bmin = 1e18, bmax = 1;
	ll cmin = 1e18, cmax = 1;
	ll dmin = 1e18, dmax = 1;
	REP(i, 0, n){
		ll a = x[i] + y[i];
		amin = std::min(amin, a);
		amax = std::max(amax, a);
		ll b = INF-x[i] + y[i];
		bmin = std::min(bmin, b);
		bmax = std::max(bmax, b);
		ll c = INF-x[i] + INF-y[i];
		cmin = std::min(cmin, c);
		cmax = std::max(cmax, c);
		ll d = x[i] + INF-y[i];
		dmin = std::min(dmin, d);
		dmax = std::max(dmax, d);
	}
	ll A = amax-amin, B = bmax-bmin, C = cmax-cmin, D = dmax-dmin;
	printf("%ld
", std::max({A, B, C, D}));
	return 0;
}
