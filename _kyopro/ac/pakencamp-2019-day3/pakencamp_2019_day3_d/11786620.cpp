
#include<bits/stdc++.h>
using ll = int_fast64_t;

int main(){
	int n;
	scanf("%d", &n);
	getchar();
	
	int dp[1+n][4];
	for(int i=1; i<=n; i++) for(int j=0; j<4; j++) dp[i][j] = 5;
	for(int j=0; j<5; j++){
		for(int i=1; i<=n; i++){
			char c = getchar();
			if(c=='R') dp[i][0]--;
			if(c=='B') dp[i][1]--;
			if(c=='W') dp[i][2]--;
			if(c=='#') dp[i][3]--;
		}
		getchar();
	}
	for(int i=0; i<4; i++) dp[0][i] = 0;

	for(int i=1; i<=n; i++){
		dp[i][0] += std::min(dp[i-1][1], dp[i-1][2]);
		dp[i][1] += std::min(dp[i-1][0], dp[i-1][2]);
		dp[i][2] += std::min(dp[i-1][0], dp[i-1][1]);
	}
	
	printf("%d
", std::min({dp[n][0], dp[n][1], dp[n][2]}));	
	return 0;
}
