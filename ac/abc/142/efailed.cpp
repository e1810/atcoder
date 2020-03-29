#include<bits/stdc++.h>
const int INF = 2e9;
using P = std::pair<int,int>;

int main(){
	int n, m;
	scanf("%d %d", &n, &m);
	std::vector<P> a(m);
	for(int i=0; i<m; i++){
		int A, b, c, x = 0;
		scanf("%d %d", &A, &b);
		for(int j=0; j<b; j++){
			scanf("%d", &c);
			x += 1<<(c-1);
		}
		a[i] = P(x, A);
	}

	long long dp[m][1<<n];
	for(int i=0; i<1<<n; i++){
		if(i==a[0].first) dp[0][i] = a[0].second;
		else dp[0][i] = INF;
	}
	
	for(int i=1; i<m; i++){
		int x, cost;
		std::tie(x, cost) = a[i];
		for(int j=0; j<1<<n; j++) dp[i][j] = dp[i-1][j];
		for(int j=0; j<1<<n; j++) dp[i][j|x] = std::min(dp[i][j|x], dp[i-1][j]+cost);
	}
	if(dp[m-1][(1<<n)-1]>=INF) puts("-1");
	else printf("%lld\n", dp[m-1][(1<<n)-1]);
	return 0;
}
