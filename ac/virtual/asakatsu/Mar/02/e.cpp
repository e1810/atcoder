#include<bits/stdc++.h>
using ll = int_fast64_t;

int main(){
	ll n, k;
	scanf("%ld %ld", &n, &k);
	std::vector<ll> a(n), f(n);
	for(ll i=0; i<n; i++) scanf("%ld", &a[i]);
	sort(a.begin(), a.end());
	for(ll i=0; i<n; i++) scanf("%ld", &f[i]);
	std::sort(f.begin(), f.end(), std::greater<ll>());

	ll l=-1, r=1e12+1;
	while(r-l>1){
		ll mid = (r-l)/2 + l, cnt = 0;
		for(ll i=0; i<n; i++){
			cnt += std::max(0l, a[i]*f[i]-mid+f[i]-1) / f[i];
		}
		
		if(cnt<=k) r = mid;
		else l = mid;
	}
	
	printf("%ld\n", r);
	return 0;
}
