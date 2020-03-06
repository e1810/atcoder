#include<bits/stdc++.h>
using ll = int_fast64_t;
using T = std::tuple<ll,ll,ll>;
const ll MOD = 1e9+7;


int main(){
	ll n, a, b, m;
	scanf("%ld %ld %ld %ld", &n, &a, &b, &m);
	std::vector<std::vector<ll>> links(n+1, std::vector<ll>(0));
	for(ll i=0; i<m; i++){
		ll x, y;
		scanf("%ld %ld", &x, &y);
		links[x].push_back(y);
		links[y].push_back(x);
	}

	std::vector<ll> dp(n+1, 0);
	dp[0] = 1;
	std::vector<ll> used(n+1, 0), dist(n+1, 2e9);
	std::queue<T> que;
	que.push(T(0, a, 0));
	while(!que.empty()){
		ll from, here, d;
		std::tie(from, here, d) = que.front();
		que.pop();
	
		if(used[here]){
			if(d<dist[here]){
				dp[here] = dp[from];
				dist[here] = d;
			}else if(d==dist[here]) dp[here] = (dp[here] + dp[from]) % MOD;
			continue;
		}

		used[here] = 1;
		dist[here] = d;
		dp[here] = dp[from] % MOD;
		for(ll to: links[here]){
			que.push(T(here, to, d+1));
		}
	}

	printf("%ld\n", dp[b]);
	return 0;
}
