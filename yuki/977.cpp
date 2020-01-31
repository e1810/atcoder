#include<bits/stdc++.h>
using ll = long long;

int main(){
	ll n;
	scanf("%lld", &n);

	std::vector<std::vector<ll>> links(n, std::vector<ll>(0));
	for(ll i=1; i<n; i++){
		ll a, b;
		scanf("%lld %lld", &a, &b);
		links[a].push_back(b);
		links[b].push_back(a);
	}

	ll islands = 0;
	std::vector<ll> a(n, 1), landsize(0);
	for(ll i=0; i<n; i++){
		if(!a[i]) continue;
		islands++;
		ll tmp = 0;
		std::queue<ll> que;
		que.push(i);
		while(!que.empty()){
			ll from = que.front(); que.pop();
			a[from] = 0;
			tmp++;
			for(ll to: links[from]){
				if(a[to]) que.push(to);
			}
		}
		landsize.push_back(tmp);
	}

	ll bob = 1;
	if(islands==1) puts("Bob");
	else if(islands==2){
		ll alice = 0;
		for(std::vector<ll> l: links) alice |= (l.size()==1);
		if(alice) puts("Alice");
		else puts("Bob");
	}else puts("Alice");
	return 0;
}

	


