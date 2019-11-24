#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;

bool comp(P a, P b){
	if(a.first<b.first) return 1;
	else if(a.first==b.first && a.second>b.second) return 1;
	else return 0;
}

int main(){
	ll w, n, k;
	scanf("%lld %lld\n%lld", &w, &n, &k);
	ll weight[n], value[n];
	for(int i=0; i<n; i++) scanf("%lld %lld", &weight[i], &value[i]);

	ll dp[w+1][n+1][50] = {0};
	for(int i=0; i<=w; i++){
		for(int j=0; j<=n; j++){
			for(int l=0; l<=k; l++){
				if(i-weight[j]>=0){
					dp[i][j+1][k] = max({dp[i][j+1][k], dp[i][j][k], dp[i-weight[j]][j][k-1]+value[j]});
				}
			}
		}
	}
	printf("%lld\n", dp[w][n][k]);
	return 0;
}



