#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;

int main(){
	ll n;
	scanf("%lld", &n);
	
	vector<vector<int>> link(n, vector<int>(0));
	for(ll i=0; i<n-1; i++){
		ll a, b;
		scanf("%lld %lld", &a, &b);
		link[a-1].push_back(b-1);
		link[b-1].push_back(a-1);
	}
	
	vector<bool> used(n, 0);
	vector<ll> ans(n);
	ans[0] = 0;

	queue<pair<ll,ll>> que;
	que.push({0, 0});
	ll cnt = 1;
	while(!que.empty()){
		pair<ll,ll> tmp = que.front(); que.pop();
		ll col = tmp.first, apex = tmp.second;
		used[apex] = true;
		ll i = 1;
		for(ll v: link[apex]){
			if(!used[v]){
				if(i == col) i++;
				ans[v] = i;
				cnt = max(cnt, i);
				que.push({i, v});
				i++;
			}
		}
	}

	printf("%lld\n", cnt);	
	for(ll i=1; i<n; i++) printf("%lld\n", ans[i]);

	return 0;
}
