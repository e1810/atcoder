#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
	ll h, w, k, v;
	scanf("%lld %lld %lld %lld", &h, &w, &k, &v);
	ll fig[h+2][w+2];
	memset(fig, 0, (h+2)*(w+2));
	for(ll i=0; i<h; i++) for(ll j=0; j<w; j++) scanf("%lld", &fig[i+1][j+1]);
	for(ll i=0; i<h; i++) for(ll j=0; j<w; j++) fig[i+1][j+1] += fig[i+1][j] + fig[i][j+1] - fig[i][j];

	ll ans = 0;
	for(ll i=0; i<h; i++){
		for(ll j=0; j<w; j++){
			for(ll l=i+1; l<=h; l++){
				for(ll m=j+1; m<=w; m++){
					if(fig[i][j]-fig[i][m]-fig[l][j]+fig[l][m]+k*(l-i)*(m-j)<=v){
						ans = max(ans, (l-i)*(m-j));
					}
				}
			}
		}
	}
	printf("%lld\n", ans);
	return 0;
}
