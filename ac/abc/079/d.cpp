#include<bits/stdc++.h>
using ll = long long;

int main(){
	ll h, w;
	scanf("%lld %lld", &h, &w);

	std::vector<std::vector<ll>> links(10, std::vector<ll>(10));
	for(ll i=0; i<10; i++) for(ll j=0; j<10; j++) scanf("%lld", &links[i][j]);

	for(ll k=0; k<10; k++) for(ll i=0; i<10; i++) for(ll j=0; j<10; j++){
		links[i][j] = std::min(links[i][j], links[i][k]+links[k][j]);
	}

	ll ans = 0;
	for(ll i=0; i<h*w; i++){
		ll a;
		scanf("%lld", &a);
		if(a<0) continue;
		ans += links[a][1];
	}
	printf("%lld\n", ans);
	return 0;
}

