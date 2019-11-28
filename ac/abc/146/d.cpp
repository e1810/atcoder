#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;

int main(){
	ll n;
	scanf("%lld", &n);
	
	vector<bool> used(n);
	used[0] = true;
	
	vector<P> toans(n-1);
	vector<vector<ll>> link(n, vector<ll>(0));
	
	for(int i=0; i<n-1; i++){
		ll a, b;
		scanf("%lld %lld", &a, &b);
		toans[i] = make_pair(a-1, b-1);
		link[a-1].push_back(b-1);
		link[b-1].push_back(a-1);
		used[i+1] = false;
	}


	map<P, ll> ans;
	queue<P> que;
	que.push(make_pair(0, 0));
	ll maxim = 0;

	while(!que.empty()){
		P tmp = que.front();
		ll m = tmp.first;
		ll col = tmp.second;
		que.pop();
		
		ll er = 1;
		for(ll v: link[m]){
			if(!used[v]){
				used[v] = true;
				if(er==col) er++;
				ans[make_pair(m,v)] = er;
				ans[make_pair(v,m)] = er;
				que.push(make_pair(v, er));
				maxim = max(maxim, er);
				er++;
			}
		}
	}

	printf("%lld\n", maxim);
	for(P p: toans) printf("%lld\n", ans[p]);

	return 0;
}
