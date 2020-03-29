#include<bits/stdc++.h>
using ll = int_fast64_t;

int main(){
	int n, p;
	scanf("%d %d", &n, &p);
	getchar();
	int s[n];
	for(int i=0; i<n; i++) s[i] = getchar()-'0';
	getchar();
	
	std::vector<std::map<ll,ll>>  dp(n);
	for(int i=0; i<n; i++) dp[i][0] = 1;
	dp[0][s[0]%p]++;

	for(int i=0; i<n-1; i++){
		for(auto pa: dp[i]){
			dp[i+1][(pa.first*10+s[i+1])%p] += pa.second;
		}
	}
	
	ll ans = -n;
	for(int i=0; i<n; i++) ans += dp[i][0];
	printf("%ld\n", ans);
	return 0;
}
