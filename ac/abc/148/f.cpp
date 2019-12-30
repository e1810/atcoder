#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> P;

int main(){
	ll n, u, v;
	vector<vector<ll>> link(n, vector<ll>(0));

	for(ll i=0; i<n-1; i++){
		ll a, b;
		scanf("%lld %lld", &a, &b);
		link[a-1].push_back(b-1);
		link[b-1].push_back(a-1);
	}

	ll tmap[n], amap[n], used[n];
	for(ll i=0; i<n; i++) used[i]=0;
	queue<P> que; que.push({u, 0});
	while(!que.empty()){
		P tm = que.front(); que.pop();
		ll idx=tm.first, dis=tm.second;
		used[idx] = 1;
		tmap[idx] = dis;
		for(ll ver: link[idx]){
			if(!used[ver]) que.push({ver, dis+1});
		}
	}
	
	for(ll i=0; i<n; i++) used[i]=0;
	que.push({v, 0});
	while(!que.empty()){
		P tm = que.front(); que.pop();
		ll idx=tm.first, dis=tm.second;
		used[idx] = 1;
		amap[idx] = dis;
		for(ll ver: link[idx]){
			if(!used[ver]) que.push({ver, dis+1});
		}
	}

	ll idx = u, dis = 0;
	for(ll i=0; i<n; i++){
		ll ddd = tmap[i] + (tmap[i]-amap[i])/2;
		if(ddd>=dis and tmap[i]<amap[i]){
			dis = ddd;
			idx = i;
		}
	}
	printf("%lld\n", dis);

	return 0;
}
