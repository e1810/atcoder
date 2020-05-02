
#include<bits/stdc++.h>
using ll = int_fast64_t;
using P = std::pair<ll,ll>;
const int MOD = 1000000007;

int main(){
	int n, m;
	scanf("%d %d", &n, &m);
	int a[n+1], dp[n+1];
	memset(a, 0, sizeof(a));
	memset(dp, 0, sizeof(dp));
	dp[0] = 1;
	for(int i=0; i<m; i++){
		int tmp;
		scanf("%d", &tmp);
		a[tmp] = 1;
	}
	for(int i=1; i<=n; i++){
		if(a[i]) continue;
		if(i>1) dp[i] += (dp[i-1] + dp[i-2]) % MOD;
		else dp[i] += dp[i-1];
		dp[i] %= MOD;
	}
	printf("%d
", dp[n]);
	return 0;
}
