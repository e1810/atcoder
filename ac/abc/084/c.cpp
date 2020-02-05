#include<bits/stdc++.h>
using ll = long long;


int main(){
	ll n;
	scanf("%lld", &n);
	
	std::vector<ll> c(n), s(n), f(n);
	c[0] = s[0] = f[0] = 0;
	for(ll i=1; i<n; i++) scanf("%lld %lld %lld", &c[i], &s[i], &f[i]);

	for(ll i=1; i<n; i++){
		ll tt = 0;
		for(ll j=i; j<n; j++){
			tt = std::max(s[j], (tt+c[j-1])*(j!=i));
			tt = (tt+f[j]-1)/f[j]*f[j];
		}
		printf("%lld\n", tt+c[n-1]);
	}
	puts("0");
	return 0;
}

