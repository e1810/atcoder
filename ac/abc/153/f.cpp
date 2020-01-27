#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll,ll>;

int main(){
	ll n, d, a;
	scanf("%lld %lld %lld", &n, &d, &a);

	vector<P> xh(n);
	for(ll i=0; i<n; i++) scanf("%lld %lld", &xh[i].first, &xh[i].second);
	sort(xh.begin(), xh.end());

	vector<P> rol(n+1);
	rol[0] = {0, 0};

	ll tmp = 0, ans = 0;
	for(ll i=1; i<=n; i++){
		ll x = xh[i-1].first, h = xh[i-1].second;
		rol[i].first = x+2*d;
		rol[i].second = h;
		for(ll j=tmp; j<i; j++){
			if(x<=rol[j].first) rol[i].second -= rol[j].second;
			else tmp++;
		}


		if(rol[i].second>0) ans += (rol[i].second+a-1)/a;
		else rol[i].second=0;

		for(ll j=tmp; j<i; j++){
			if(rol[j].second) rol[j].second = max(rol[j].second, rol[i].second);
		}
	}
	printf("%lld\n", ans);
	return 0;
}

