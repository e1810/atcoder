#include<bits/stdc++.h>

int n, w;
int value[100], weight[100], dp[110][10010];

int main(){
	scanf("%d %d", &n, &w);
	for(int i=0; i<n; i++) scanf("%d %d", &value[i], &weight[i]);

	memset(dp, 0, n*w);
	for(int i=0; i<n; i++){
		for(int j=0; j<=w; j++){
			if(j<weight[i]) dp[i+1][j] = dp[i][j];
			else dp[i+1][j] = std::max(dp[i][j], dp[i][j-weight[i]]+value[i]);
		}
	}
	printf("%d\n", dp[n][w]);
	return 0;
}

