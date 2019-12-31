#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF=1000000007;

int main(){
	ll h, w, c;
	scanf("%lld %lld %lld", &h, &w, &c);

	ll fig[h+1][w+1];

	for(ll j=0; j<=w; j++) fig[0][j] = INF;
	for(ll i=0; i<=h; i++) fig[i][0] = INF;
	fig[0][1] = 0; fig[1][0] = 0;
	for(ll i=1; i<=h; i++){
		for(ll j=1; j<=w; j++){
			ll t;
			scanf("%lld", &t);
			fig[i][j] = c*t;
		}
	}

	ll dp[h+1][w+1];
	for(ll i=0; i<=h; i++) for(ll j=0; j<=w; j++) dp[i][j] = INF;
	dp[0][1] = 0; dp[1][0] = 0;
	for(ll i=1; i<=h; i++){
		for(ll j=1; j<=w; j++){
			dp[i][j] = min(dp[i-1][j]+fig[i][j], dp[i][j-1]+fig[i][j]);
		}
	}
	printf("%lld\n", dp[h][w]);
	return 0;
}
