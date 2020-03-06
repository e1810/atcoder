#include<bits/stdc++.h>

int main(){
	int n, k;
	scanf("%d %d", &n, &k);
	std::vector<int> a(n);
	for(int i=0; i<n; i++) scanf("%d", &a[i]);
	
	std::vector<int> dp(n, 1e11);
	dp[0] = 0;
	for(int i=0; i<n; i++){
		for(int j=0; j<=k; j++){
			if(i-j>=0) dp[i] = std::min(dp[i], dp[i-j]+abs(a[i]-a[i-j]));
		}
	}
	
	printf("%d\n", dp[n-1]);
	return 0;
}
