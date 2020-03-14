#include<stdio.h>
#include<stdlib.h>

int max(int a, int b){
	return a>b? a:b;
}

int main(){
	int d, n;
	scanf("%d %d", &d, &n);
	int t[d];
	for(int i=0; i<d; i++) scanf("%d", &t[i]);
	int a[n], b[n], c[n];
	for(int i=0; i<n; i++) scanf("%d %d %d", &a[i], &b[i], &c[i]);
	

	int dp[d][n];
	for(int i=0; i<n*d; i++) dp[i/n][i%n] = 0;
	for(int i=0; i<n; i++){
		if(t[0]<a[i] || b[i]<t[0]) dp[0][i] = -2e9;
		else dp[0][i] = 0;
	}

	for(int i=1; i<d; i++){
		for(int j=0; j<n; j++){
			if(t[i]<a[j] || b[j]<t[i]){
				dp[i][j] = -2e9;
				continue;
			}
			for(int k=0; k<n; k++){
				dp[i][j] = max(dp[i][j], dp[i-1][k] + abs(c[k]-c[j]));
			}
		}
	}
	
	int ans = 0;
	for(int i=0; i<n; i++) ans = max(ans, dp[d-1][i]);
	printf("%d\n", ans);
	return 0;
}
