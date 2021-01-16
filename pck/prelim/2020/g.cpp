#include<bits/stdc++.h>
using ll = int_fast64_t;
using P = std::pair<ll,ll>;

int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

int main(){
	ll w, d, h, c;
	scanf("%ld %ld %ld %ld", &w, &d, &h, &c);

	ll ans = w*d*2 + d*h*2 + h*w*2;
	std::map<P, ll> mp;
	while(c--){
		ll x, y, z;
		scanf("%ld %ld %ld", &x, &y, &z);
		ll nex = (mp[P(x,y)] += z);
		for(int i=0; i<4; i++){
			ll nx = x+dx[i], ny = y+dy[i], dig = h;
			if(0<=nx && nx<w && 0<=ny && ny<d){
				dig = mp[P(nx, ny)];
			}
			if(dig>=nex) ans -= z;
			else if(dig<=(nex-z)) ans += z;
			else if(dig>=(nex-z) && dig<=nex){
				ans += std::max(0l, nex-dig) - std::max(0l, dig-(nex-z));
			}
		}
	}
	printf("%ld\n", ans);
	return 0;
}
