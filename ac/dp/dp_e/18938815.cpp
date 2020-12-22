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
	int n, W;
	scanf("%d %d", &n, &W);

	const int MAX = 100100;
	ll dp[MAX];
	REP(i, 0, MAX) dp[i] = 1e18;
	dp[0] = 0;

	REP(i, 0, n){
		ll w, v;
		scanf("%ld %ld", &w, &v);
		for(int j=MAX-1; j>=0; j--){
			if(j+v<MAX){
				dp[j+v] = std::min(dp[j+v], dp[j] + w);
			}
		}
	}

	int ans = 0;
	REP(i, 0, MAX){
		if(dp[i]<=W) ans = i;
	}
	printf("%d
", ans);
	return 0;
}
