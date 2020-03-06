#include<bits/stdc++.h>
using ll = int_fast64_t;
const ll MOD = 1e9+7;

int main(){
	ll n;
	scanf("%ld", &n);
	std::vector<ll> a(n);
	for(ll i=0; i<n; i++) scanf("%ld", &a[i]);
	std::reverse(a.begin(), a.end());	

	ll ans=0, pw = 1;
	for(ll i=0; i<n; i++){
		while(a[i]){
			ans += (a[i]%10*pw)%MOD;
			ans %= MOD;
			pw = pw*10 %MOD;
			a[i] /= 10;
		}
	}
	printf("%ld\n", ans);
	return 0;
}
