#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, m;
	scanf("%d %d", &n, &m);
	vector<int> cc(m);
	for(int i=0; i<m; i++) scanf("%d", &cc[i]);
	sort(cc.begin(), cc.end());

	vector<int> dp(50001);
	fill(dp.begin(), dp.end(), 1e8);
	dp[0] = 0;
	for(int i=0; i<=n; i++){
		for(int j=0; j<m; j++){
			if(n < i+cc[j]) break;
			dp[i+cc[j]] = min(dp[i+cc[j]], dp[i]+1);
		}
	}
	printf("%d\n", dp[n]);
	return 0;
}
		
