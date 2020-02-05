#include<bits/stdc++.h>
using ll = long long;

int main(){
	ll n;
	scanf("%lld", &n);
	std::vector<ll> a(n);
	for(ll i=0; i<n; i++) scanf("%lld", &a[i]);
	std::vector<ll> b(a);
	std::sort(b.begin(), b.end());
	
	int med = (b[n/2-1]+b[n/2])/2;
	for(ll i: a) printf("%lld\n", b[n/2-(i>med)]);
	return 0;
}

