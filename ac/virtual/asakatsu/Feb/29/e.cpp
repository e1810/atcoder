#include<bits/stdc++.h>
using ll = int_fast64_t;

int main(){
	ll n;
	scanf("%ld", &n);
	
	std::vector<std::vector<ll>> dist(n, std::vector<ll>(n)), use(n, std::vector<ll>(n, 1));
	for(ll i=0; i<n; i++) for(ll j=0; j<n; j++) scanf("%ld", &dist[i][j]);
	
	for(ll i=0; i<n; i++){
		for(ll j=0; j<n; j++){
			if(i==j) continue;
			for(ll k=0; k<n; k++){
				if(i!=k and j!=k and dist[i][j]==dist[i][k]+dist[k][j]){
					use[i][j] = 0;
				}else if(dist[i][j]>dist[i][k]+dist[k][j]){
					puts("-1");
					return 0;
				}
			}
		}
	}
	
	ll ans = 0;
	for(ll i=0; i<n; i++){
		for(ll j=0; j<n; j++){
			if(use[i][j]) ans +=  dist[i][j];
		}
	}
	printf("%ld\n", ans/2);
	return 0;
}
