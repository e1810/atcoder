#include<bits/stdc++.h>
#define REP(i,b,e) for(int i=b;i<e;i++)
using ll = int_fast64_t;
const int MOD = 1e9+7;

int main(){
	int n, k;
	scanf("%d %d", &n, &k);
	int a[n];
	REP(i, 0, n){
		scanf("%d", &a[i]);
		a[i] -= k;
	}

	ll dp[1+n][20200] = {};
	dp[0][10100] = 1;
	REP(i, 1, 1+n){
		REP(j, 0, 20200){
			dp[i][j] += dp[i-1][j];
			dp[i][j] %= MOD;
			if(j<a[i-1] or 20200<=j-a[i-1]) continue;
			dp[i][j] += dp[i-1][j-a[i-1]];
			dp[i][j] %= MOD;
		}
	}

	ll ans = 0;
	REP(i, 10100, 20200){
		ans += dp[n][i];
		ans %= MOD;
	}

	printf("%ld\n", (ans-1+MOD)%MOD);
	return 0;
}
