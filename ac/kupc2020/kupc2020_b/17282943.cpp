#include<bits/stdc++.h>
using ll = int_fast64_t;

#define REP(i,b,e) for(ll i=b; i<e; i++)
#define PRINT(vec) printf("[ ");for(auto &i:vec)printf("%ld ",i);puts("]");

const int MOD = 1e9+7;

int main(){
	int n, k;
	scanf("%d %d", &n, &k);
	int note[n][k];
	REP(i, 0, n) REP(j, 0, k) scanf("%d", &note[i][j]);

	ll dp[n][k+1] = {}, pos[n-1][k];
	REP(i, 0, n-1){
		REP(j, 0, k){
			int p = std::lower_bound(note[i+1], note[i+1]+k, note[i][j]) - note[i+1];
			pos[i][j] = p;
		}
	}
	REP(j, 0, k) dp[n-1][j] = 1;

	for(int i=n-2; i>=0; i--){
		for(int j=k; j>0; j--) dp[i+1][j-1] = (dp[i+1][j-1] + dp[i+1][j]) % MOD;
		REP(j, 0, k) dp[i][j] = dp[i+1][pos[i][j]];
	}

	ll ans = 0;
	REP(j, 0, k) ans = (ans + dp[0][j]) % MOD;
	printf("%ld
", ans);
	return 0;
}
