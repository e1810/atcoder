#include<bits/stdc++.h>
using ll = int_fast64_t;


int main(){
	ll n;
	scanf("%ld", &n);
	std::vector<std::vector<ll>> links(n, std::vector<ll>(0));
	for(ll i=0; i<n-1; i++){
		ll a, b;
		scanf("%ld %ld", &a, &b);
		links[a-1].push_back(b-1);
		links[b-1].push_back(a-1);
	}

	std::vector<ll>  df(n), ds(n), used(n, 0);

	df[0] = 0;	
	std::queue<ll> que;
	que.push(0);
	while(!que.empty()){
		ll s = que.front(); que.pop();
		used[s] = 1;
		for(ll t: links[s]){
			if(used[t]) continue;
			df[t] = df[s]+1;
			que.push(t);
		}
	}
	
	for(ll i=0; i<n; i++) used[i]=0;
	ds[n-1] = 0;
	que.push(n-1);
	while(!que.empty()){
		ll s = que.front(); que.pop();
		used[s] = 1;
		for(ll t: links[s]){
			if(used[t]) continue;
			ds[t] = ds[s]+1;
			que.push(t);
		}
	}

	ll fen = 0, sun = 0;
	for(ll i=0; i<n; i++){
		//printf("%ld %ld\n", df[i], ds[i]);
		if(df[i]<=ds[i]) fen++;
		else sun++;
	}

	//printf("%ld %ld\n", fen, sun);
	if(fen>sun) puts("Fennec");
	else puts("Snuke");
	return 0;
}
	
