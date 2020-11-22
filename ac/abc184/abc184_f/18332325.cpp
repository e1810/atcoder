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
	ll n, t;
	scanf("%ld %ld", &n, &t);
	ll m = n/2;
	n = (n+1)/2;
	ll a[n], b[m];
	REP(i, 0, n) scanf("%ld", &a[i]);
	REP(i, 0, m) scanf("%ld", &b[i]);

	std::vector<ll> x, y;
	REP(i, 0, 1<<n){
		ll sum1 = 0;
		REP(j, 0, n) if((i>>j)&1) {
			sum1 += a[j];
		}
		x.push_back(sum1);
	}
	REP(i, 0, 1<<m){
		ll sum = 0;
		REP(j, 0, m) if((i>>j)&1) {
			sum += b[j];
		}
		y.push_back(sum);
	}
	std::sort(y.begin(), y.end());

	ll ans = 0;
	for(auto z: x){
		if(t<z) continue;
		int pos = std::upper_bound(y.begin(), y.end(), t-z) - y.begin();
		ans = std::max(ans, z+y[pos-1]);	
	}
	printf("%ld
", ans);
	return 0;
}
