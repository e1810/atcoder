#include<iostream>
#include<vector>
#include<algorithm>

using ll = int_fast64_t;

int main(){
	ll n;
	scanf("%ld", &n);
	
	std::vector<ll> a(n);
	for(ll i=0; i<n; i++) scanf("%ld", &a[i]);
	for(ll i=0; i<n; i++){
		ll tmp;
		scanf("%ld", &tmp);
		a[i] -= tmp;
	}
	std::sort(a.begin(), a.end());
	
	ll ans = 0;
	for(ll i=0; i<n; i++){
		ll l=i, r=n;
		while(r-l>1){
			ll mid = (l+r)/2;
			if(a[i]+a[mid]>0) r = mid;
			else l = mid;
		}
		ans += n-r-(r==i);
	}

	printf("%ld\n", ans);
	return 0;
}

