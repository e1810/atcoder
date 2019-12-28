#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll n, m, k;
	scanf("%lld %lld %lld", &n, &m, &k);
	vector<ll> a(n+1); a[0] = 0;
	for(ll i=1; i<=n; i++) scanf("%lld", &a[i]);
	
	ll dp[n+1]; dp[0] = 0;
	for(ll i=1; i<=n; i++) dp[i]=1e18;
	for(ll i=1; i<=n; i++){
		ll mx = 0, mn = 1e11;
		for(ll j=0; j<m; j++){
			if(i-j<0)break;
			mx = max(mx, a[i-j]);
			mn = min(mn, a[i-j]);
			dp[i] = min(dp[i], dp[i-j-1] + k + (j+1)*(mx-mn));

		}
	}
	//for(ll i=0; i<=n; i++) printf("%lld ", dp[i]);puts("");
	printf("%lld\n", dp[n]);
	return 0;
}
