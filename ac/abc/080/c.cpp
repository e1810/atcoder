#include<bits/stdc++.h>
typedef long long ll;
using std::vector;

int main(){
	ll n;
	scanf("%lld", &n);

	ll open[n][10];
	for(ll i=0; i<n; i++) for(ll j=0; j<10; j++) scanf("%lld", &open[i][j]);

	ll earn[n][11];
	for(ll i=0; i<n; i++) for(ll j=0; j<11; j++) scanf("%lld", &earn[i][j]);

	ll mx = -1e9;
	for(ll i=1; i<1024; i++){
		ll sm = 0;
		for(ll j=0; j<n; j++){
			ll cnt = 0;
			for(ll k=0; k<10; k++) cnt += ((i>>k)&open[j][k]);
			sm += earn[j][cnt];
		}
		mx = sm>mx? sm:mx;
	}
	printf("%lld\n", mx);
	return 0;
}
