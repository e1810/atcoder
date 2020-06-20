#include<bits/stdc++.h>
using ll = int_fast64_t;
#define REP(i,b,e) for(ll i=b; i<e; i++)
const int MOD = 998244353;

int main(){
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	
	ll dp[c+1][d+1];
	dp[a][b] = 1;
	REP(j, b+1, d+1) dp[a][j] = dp[a][j-1] * a % MOD;
	REP(i, a+1, c+1) dp[i][b] = dp[i-1][b] * b % MOD;

	REP(i, a+1, c+1){
		REP(j, b+1, d+1){
			dp[i][j] = (dp[i-1][j]*j%MOD + dp[i][j-1]*i%MOD) % MOD;
			dp[i][j] -= dp[i-1][j-1]*(i-1)%MOD * (j-1)%MOD;
			if(dp[i][j]<0) dp[i][j] += MOD;
		}
	}

	printf("%ld
", dp[c][d]);
	return 0;
}
