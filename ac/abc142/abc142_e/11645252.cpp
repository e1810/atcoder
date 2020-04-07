
#include<bits/stdc++.h>
using ll = int_fast64_t;
using P = std::pair<ll,ll>;

int main(){
	int n, m;
	scanf("%d %d", &n, &m);
	std::vector<ll> a(m), b(m, 0);
	for(int i=0; i<m; i++){
		ll tmp;
		scanf("%ld %ld", &a[i], &tmp);
		for(int j=0; j<tmp; j++){
			ll c;
			scanf("%ld", &c);
			b[i] += (1<<(c-1));
		}
	}

	ll dp[m+1][1<<n];
	for(int i=0; i<=m; i++) for(int j=0; j<1<<n; j++) dp[i][j] = 1e11;
	dp[0][0] = 0;

	for(int i=0; i<m; i++){
		for(int j=0; j<(1<<n); j++){
			dp[i+1][j] = std::min(dp[i+1][j], dp[i][j]);
			dp[i+1][j|b[i]] = std::min(dp[i+1][j|b[i]], dp[i][j]+a[i]);
		}
	}

	if(dp[m][(1<<n)-1]>=1e11) puts("-1");
	else printf("%ld
", dp[m][(1<<n)-1]);
	return 0;
}
