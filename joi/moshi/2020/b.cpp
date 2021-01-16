#include<iostream>
using P = std::pair<int,int>;

int n;
P v[1000];
int dp[1001][70000] = {};

int main(){
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		int w, b;
		scanf("%d %d", &w, &b);
		v[i].first = w - b;
		v[i].second = w + b;
	}

	for(int i=0; i<n; i++){
		for(int j=0; j<70000; j++){
			dp[i+1][j] = std::max(dp[i+1][j], dp[i][j]);
			if(j-v[i].first<0 || j-v[i].first>=70000) continue;
			if(dp[i][j-v[i].first]==0 && j-v[i].first!=35000) continue;
			dp[i+1][j] = std::max(dp[i+1][j], dp[i][j-v[i].first]+v[i].second);
		}
	}

	int ans = 0;
	for(int i=35000; i<70000; i++){
		ans = std::max(ans, dp[n][i]);
	}
	printf("%d\n", ans);
	return 0;
}
