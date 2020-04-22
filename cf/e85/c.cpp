#include<bits/stdc++.h>
using ll = int_fast64_t;
using P = std::pair<ll,ll>;

int main(){
	int qq; scanf("%d", &qq);
	for(int qr=0; qr<qq; qr++){
		int n; scanf("%d", &n);
		std::vector<P> ab(n);
		for(int i=0; i<n; i++) scanf("%lld %lld", &ab[i].first, &ab[i].second);
		
		ll mn = 1e18, sm = 0;
		for(int i=0; i<n; i++){
			ll y;
			if(i>0) y = std::max(0ll, ab[i].first-ab[i-1].second);
			else y = std::max(0ll, ab[0].first-ab[n-1].second);
			ll x = ab[i].first - y;
			if(x<=mn) mn = x;
			sm += y;
		}
		printf("%lld\n", mn+sm);
	}
	return 0;
}
