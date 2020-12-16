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
	ll n, m;
	scanf("%ld %ld", &n, &m);

	ll cost[m], key[m] = {};
	REP(i, 0, m){
		ll b, c;
		scanf("%ld %ld", &cost[i], &b);
		REP(j, 0, b){
			scanf("%ld", &c);
			key[i] |= (1 << (c-1));
		}
	}

	ll dp[1+m][1<<n];
	REP(i, 0, 1+m) REP(j, 0, 1<<n) dp[i][j] = 1e18;
	dp[0][0] = 0;
	
	REP(i, 0, m){
		REP(j, 0, 1<<n){
			dp[i+1][j] = std::min(dp[i+1][j], dp[i][j]);
			dp[i+1][j|key[i]] = std::min(dp[i+1][j|key[i]], dp[i][j] + cost[i]);
		}
	}
	if(dp[m][(1<<n)-1]==1e18) puts("-1");
	else printf("%ld
", dp[m][(1<<n)-1]);
	return 0;
}
