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
	int n, m;
	scanf("%d %d", &n, &m);

	std::map<int, ll> mp;
	int a[1+n] = {};
	REP(i, 0, n){
		scanf("%d", &a[i+1]);
		a[i+1] %= m;
		a[i+1] = (a[i+1] + a[i]) % m;
	}
	REP(i, 0, n+1) mp[a[i]]++;

	ll ans = 0;
	REP(i, 0, n){
		ans += --mp[a[i]];
	}
	printf("%ld
", ans);
	return 0;
}
