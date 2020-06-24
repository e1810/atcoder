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
	ll x[n], y[n];
	REP(i, 0, n) scanf("%ld %ld", &x[i], &y[i]);

	int ans = 0;
	REP(i, 0, n) REP(j, i+1, n) REP(k, j+1, n) {
		ll x1 = x[j]-x[i], y1 = y[j]-y[i];
		ll x2 = x[k]-x[i], y2 = y[k]-y[i];
		ll areaW = labs(x1*y2-x2*y1);
		if(areaW%2==0 and areaW!=0) ans++;
	}
	printf("%d
", ans);
	return 0;
}
