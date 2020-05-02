#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll n, m;
	scanf("%lld %lld", &n, &m);
	ll a[n];
	for(ll i=0; i<n; i++) scanf("%lld", &a[i]);

	ll ans=0;
	for(ll i=0; i<(1<<n); i++){
		ll tmp = 1;
		for(ll j=0; j<n; j++){
			if((i>>j)&1) tmp*=a[j];
		}
		if(abs(tmp-m)<abs(ans-m)) ans=tmp;
	}
	printf("%lld\n", ans);
	return 0;
}
