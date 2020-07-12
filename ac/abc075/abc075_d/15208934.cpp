#pragma target("avx")
#pragma optimize("O3")
#include<bits/stdc++.h>
using ll = int_fast64_t;
using P = std::pair<ll,ll>;
using V = std::vector<ll>;

#define REP(i,b,e) for(ll i=b; i<e; i++)
#define ALL(vec) vec.begin(),vec.end()
#define fi first
#define se second

const int MOD = 1e9+7;
const ll INF = 1e18;
int dx[] = {0, 1, 0, -1, 1, 1, -1, -1}, dy[] = {1, 0, -1, 0, 1, -1, -1, 1};

int main(){
	int n, K;
	scanf("%d %d", &n, &K);
	std::vector<P> xy(n);
	REP(i, 0, n) scanf("%ld %ld", &xy[i].fi, &xy[i].se);
	std::sort(ALL(xy), [](P a, P b){return a.se<b.se;});
	V x(n), y(n);
	REP(i, 0, n) std::tie(x[i], y[i]) = xy[i];

	ll ans = LONG_MAX;
	REP(i, 0, n) REP(j, 0, n){
		if(x[i]>x[j]) continue;
		REP(k, 0, n){
			if(x[k]<x[i] or x[j]<x[k] or y[i]<y[k] or y[j]<y[k]) continue;
			ll cnt = 3 - (i==j or j==k or k==i) - (i==j and j==k);
			REP(l, 0, n){
				if(y[l]<y[k] or x[l]<x[i] or x[j]<x[l]) continue;
				cnt += (l!=i and l!=j and l!=k);
				if(cnt==K){
					ll tmp = (x[j]-x[i]) * (std::max({y[i],y[j],y[l]})-y[k]);
					if(tmp) ans = std::min(ans, tmp);
				}
			}
		}
	}
	printf("%ld
", ans);
	return 0;
}
