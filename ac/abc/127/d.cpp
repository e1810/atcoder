#include<bits/stdc++.h>
using ll = long long;
using P = std::pair<ll,ll>;

bool cmp(P a, P b){
	return a.second>b.second;
}

int main(){
	ll n, m;
	scanf("%lld %lld", &n, &m);
	std::priority_queue<ll, std::vector<ll>, std::greater<ll>> que;
	for(ll i=0; i<n; i++){
		ll tmp;
		scanf("%lld", &tmp);
		que.push(tmp);
	}

	std::vector<P> bc(m);
	for(ll i=0; i<m; i++) scanf("%lld %lld", &bc[i].first, &bc[i].second);
	std::sort(bc.begin(), bc.end(), cmp);

	ll ans = 0;
	for(ll i=0; i<m; i++){
		for(ll j=0; j<bc[i].first; j++){
			ll tmp = que.top(); que.pop();
			if(tmp>bc[i].second){
				ans += tmp;
				goto outer;
			}
			ans += bc[i].second;
			if(que.empty()) goto outer;
		}
	}
	
	outer:
	while(!que.empty()){
		ans += que.top();
		que.pop();
	}
	printf("%lld\n", ans);
	return 0;
}
