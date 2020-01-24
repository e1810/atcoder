#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	ll n; scanf("%lld", &n);
	vector<ll> a(1000000, 0);
	for(ll i=0; i<n; i++){
		ll tmp; scanf("%lld", &tmp);
		a[tmp]++;
	}

	ll ans = 0;
	for(ll i=1; i<99999; i++) ans = max(ans, a[i-1]+a[i]+a[i+1]);
	printf("%lld\n", ans);
	return 0;
}


