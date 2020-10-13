#include<bits/stdc++.h>
#define REP(i,b,e) for(int i=(b);i<(e);i++)
using ll = int_fast64_t;

int main(){
	int n, a, b;
	scanf("%d %d %d", &n, &a, &b);
	int k[n];
	REP(i, 0, n) scanf("%d", &k[i]);

	int dp[n+1] = {};
	REP(i, 0, n){
		int sum = k[i];
		REP(j, 0, b) if(i+1+j<n) sum += std::min(a, k[i+1+j]);
		int ed = std::min(n, i+b+1);
		dp[ed] = std::max(dp[ed], dp[i] + sum);
		dp[i+1] = std::max(dp[i+1], dp[i] + std::min(a, k[i]));
	}
	printf("%d\n", dp[n]);
	return 0;
}

