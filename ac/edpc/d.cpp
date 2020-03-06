#include<bits/stdc++.h>
using ll = int_fast64_t;

int main(){
	int n, w;
	scanf("%d %d", &n, &w);
	std::vector<int> weight(n), value(n);
	for(int i=0; i<n; i++) scanf("%d %d", &weight[i], &value[i]);
	
	std::vector<std::vector<ll>> dp(n+1, std::vector<ll>(w+1, 0));
	for(int i=0; i<n; i++){
		for(int j=0; j<=w; j++){
			dp[i+1][j] = std::max(dp[i+1][j], dp[i][j]);
			if(j-weight[i]>=0){
				dp[i+1][j] = std::max(dp[i+1][j], dp[i][j-weight[i]]+value[i]);
			}
		}
	}

	printf("%ld\n", dp[n][w]);
	return 0;
}
