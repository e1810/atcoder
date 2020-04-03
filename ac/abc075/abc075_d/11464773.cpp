
#include <bits/stdc++.h>
using ll = int_fast64_t;
using P = std::pair<ll,ll>;

int main(){
	int n, K;
	scanf("%d %d", &n, &K);
	std::vector<P> xy(n);
	for(int i=0; i<n; i++) scanf("%ld %ld", &xy[i].first, &xy[i].second);
	std::sort(xy.begin(), xy.end());
	ll x[n], y[n];
	for(int i=0; i<n; i++){
		x[i] = xy[i].first;
		y[i] = xy[i].second;
	}	

	ll ans = 5e18;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(y[j]>y[i]) continue;
			for(int k=0; k<n; k++){
				if(y[k]>y[i] or y[k]<y[j] or x[k]>x[i] or x[k]>x[j]) continue;
				int cnt = 3-(i==j or j==k or k==i) - (i==j and j==k);
				for(int l=0; l<n; l++){
					if(y[l]>y[i] or y[l]<y[j] or x[l]<x[k]) continue;
					cnt += (l!=i and l!=j and l!=k);
					if(cnt>=K){
						ll area = (y[i]-y[j]) * (std::max({x[l],x[i],x[j]})-x[k]);
						if(area>0) ans = std::min(ans, area);
					}
				}
			}
		}
	}
	printf("%ld
", ans);
	return 0;
}
