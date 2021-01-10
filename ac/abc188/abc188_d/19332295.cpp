#include<bits/stdc++.h>
using ll = int_fast64_t;
using P = std::pair<ll,ll>;
using PP = std::pair<ll,P>;

#define REP(i,b,e) for(int i=b; i<e; i++)
#define PRINT(vec) {printf("[ ");for(auto &i:vec)printf("%ld ",i);puts("]");}
#define fi first
#define se second

const int MOD = 1e9+7;
int dx[] = {0, 1, 0, -1, 1, 1, -1, -1}, dy[] = {1, 0, -1, 0, 1, -1, -1, 1};

int main(){
	ll n, c;
	scanf("%ld %ld", &n, &c);
	P cost[2*n];
	REP(i, 0, n){
		ll a, b, c;
		scanf("%ld %ld %ld", &a, &b, &c);
		cost[i] = P(a, c);
		cost[n+i] = P(b+1, -c);
	}
	std::sort(cost, cost+2*n);

	ll ans = 0, now = 0, last = 0;
	REP(i, 0, 2*n){
		auto [d, x] = cost[i];
		ans += (d-last) * std::min(now, c);
		now += x;
		last = d;
	}
	printf("%ld
", ans);
	return 0;
}
