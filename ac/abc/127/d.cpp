#include<bits/stdc++.h>
using ll = long long;

int main(){
	ll n, m;
	scanf("%lld %lld", &n, &m);
	std::priority_queue<ll, std::vector<ll>, std::greater<ll>> que;
	for(ll i=0; i<n; i++){
		ll tmp;
		scanf("%lld", &tmp);
		que.push(tmp);
	}

	for(ll i=0; i<m; i++){
		ll b, c;
		scanf("%lld %lld", &b, &c);

		for(ll j=0; j<b; j++){
			ll tmp = que.top(); que.pop();
			if(tmp<c) que.push(c);
			else{
				que.push(tmp);
				break;
			}
		}
	}

	ll sm = 0;
	for(ll i=0; i<n; i++){
		sm += que.top();
		que.pop();
	}
	printf("%lld\n", sm);
	return 0;
}
