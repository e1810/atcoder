#include<bits/stdc++.h>
using namespace std;
using ll = int_fast64_t;
using P = pair<ll,ll>;

int main(){
	ll n;
	scanf("%ld", &n);
	vector<vector<ll>> link(n, vector<ll>(0));
	vector<P> edges(n-1);
	for(ll i=0; i<n-1; i++){
		scanf("%ld %ld", &edges[i].first, &edges[i].second);
		link[edges[i].first-1].push_back(edges[i].second-1);
		link[edges[i].second-1].push_back(edges[i].first-1);
	}

	vector<ll> used(n,0);
	ll ansc = 1;
	map<P, ll> ans;

	queue<P> que;
	que.push(P(0,0));
	while(!que.empty()){
		ll here, color;
		tie(here, color) = que.front();
		que.pop();

		ansc = max(ansc, color);
		used[here] = 1;

		ll i=1;
		for(ll v: link[here]){
			if(!used[v]){
				if(color==i) i++;
				que.push(P(v, i));
				ans[P(min(here,v)+1,max(here,v)+1)] = i;
				i++;
			}
		}
	}

	printf("%ld\n", ansc);
	for(P p: edges){
		printf("%ld\n", ans[p]);
	}
	return 0;
}




