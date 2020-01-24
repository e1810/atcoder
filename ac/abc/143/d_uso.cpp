#include<bits/stdc++.h>
using ll = long long;

// this cannnot be accepted
int main(){
	ll n;
	scanf("%lld", &n);

	std::vector<ll> a(n);
	for(ll i=0; i<n; i++) scanf("%lld", &a[i]);

	ll ans = 0;
	for(ll i=0; i<n-2; i++)for(ll j=i+1; j<n-1; j++)for(ll k=j+1; k<n; k++){
		if(a[i]+a[j]>a[k] and a[j]+a[k]>a[i] and a[k]+a[i]>a[j]) ans++;
	}
	printf("%lld\n", ans);
	return 0;
}
