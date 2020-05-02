
#include<bits/stdc++.h>
using ll = int_fast64_t;

int main(){
	ll n;
	scanf("%ld", &n);
	std::vector<ll> a(n), b(n), c(n);
	for(ll i=0; i<n; i++) scanf("%ld", &a[i]);
	for(ll i=0; i<n; i++) scanf("%ld", &b[i]);
	for(ll i=0; i<n; i++) scanf("%ld", &c[i]);
	std::sort(a.begin(), a.end());
	std::sort(c.begin(), c.end());

	ll ans = 0;
	for(ll i=0; i<n; i++){
		ll tmp = std::lower_bound(a.begin(), a.end(), b[i]) - a.begin();
		tmp *= n - (std::upper_bound(c.begin(), c.end(), b[i]) - c.begin());
		ans += tmp;
	}
	
	printf("%ld
", ans);
	return 0;
}
