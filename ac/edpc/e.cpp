#include<bits/stdc++.h>
using ll = int_fast64_t;

int main(){
	int n, w;
	scanf("%d %d", &n, &w);
	std::vector<int> weight(n), value(n);
	for(int i=0; i<n; i++) scanf("%d %d", &weight[i], &value[i]);
	
	std::vector<std::vector<ll>> dp(n+1, std::vector<ll>(1e5+1, 1e18));
	for(int i=0; i<n; i++) dp[i][0] = 0;
	for(int j=0; j<=1e5; j++) dp[0][j] = 0;

	for(int i=0; i<n; i++){
		for(int j=0; j<1e5; j++){
			dp[i+1][j] = std::min(dp[i+1][j], dp[i][j]);
			if(j-value[i]>=0){
				dp[i+1][j] = std::min(dp[i+1][j], dp[i][j-value[i]]+weight[i]);
			}
		}
	}

	int ans = 0;
	for(int i=0; i<=1e5; i++){
		if(dp[n][i]<=w) ans = i;
	}
	printf("%d\n", ans);
	return 0;
}
