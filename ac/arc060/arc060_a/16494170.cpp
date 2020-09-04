#include<bits/stdc++.h>
using ll = int_fast64_t;
#define REP(i,b,e) for(ll i=b; i<e; i++)

//i個目までみてj個選んだ時総和がkになる組み合わせ数
ll dp[60][60][3000] = {};

int main(){
	int n, x;
	scanf("%d %d", &n, &x);
	int a[n];
	REP(i, 0, n) scanf("%d", &a[i]);
	dp[0][0][0] = 1;

	REP(i, 0, n) REP(j, 0, 1+n) REP(k, 0, 2500) {
	    dp[i+1][j][k] += dp[i][j][k];
	    if(j<n) dp[i+1][j+1][k+a[i]] += dp[i][j][k];
	}
	
	ll ans = 0;
	REP(j, 1, n+1) {
	    ans += dp[n][j][x*j];
	}
	printf("%ld
", ans);
	return 0;
}
