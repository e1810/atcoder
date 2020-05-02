
#include<bits/stdc++.h>
using ll = int_fast64_t;

ll n, w, weight[100], value[100], dp[101][400][101];

int main(){
	scanf("%ld %ld", &n, &w);
	for(int i=0; i<n; i++) scanf("%ld %ld", &weight[i], &value[i]);
	
	for(int i=0; i<n; i++){
		for(int j=0; j<=300; j++){
			for(int k=0; k<n; k++){
				dp[i+1][j][k] = std::max(dp[i+1][j][k], dp[i][j][k]);
				dp[i+1][j+weight[i]-weight[0]][k+1] = std::max(dp[i+1][j+weight[i]-weight[0]][k+1], dp[i][j][k] + value[i]);
			}
		}
	}	
	
	ll ans = 0;
	for(ll j=0; j<400; j++){
		for(ll k=0; k<=n; k++){
			if(j + k * weight[0] <= w) ans = std::max(ans, dp[n][j][k]);
		}
	}
	printf("%ld
", ans);
}
