#include<bits/stdc++.h>
using ll = int_fast64_t;

int main(){
	int n;
	scanf("%d", &n);
	ll a[n];
	for(int i=0; i<n; i++){
		scanf("%ld", &a[i]);
		a[i] %= 10;
	}

	ll dp[1+n][10];
	for(int i=0; i<=n; i++) for(int j=0; j<10; j++) dp[i][j] = -1;
	dp[0][0] = 0;
	for(int i=0; i<n; i++){
		for(int j=0; j<10; j++){
			if(dp[i][j]<0) continue;
			dp[i+1][j] = std::max(dp[i+1][j], dp[i][j]);
			dp[i+1][(j+a[i])%10] = std::max(dp[i+1][(j+a[i])%10], dp[i][j]+1);
		}
	}
	printf("%ld\n", dp[n][0]);
	return 0;
}


