#include<bits/stdc++.h>
using ll = int_fast64_t;

int main(){
	std::vector<ll> wa(0);
	wa.push_back(0);
	std::vector<ll> prime(1e7, 1);
	prime[0] = prime[1] = 0;
	for(ll i=2; i<1e7; i++){
		if(prime[i]){
			wa.push_back(i);
			for(ll j=i+i; j<1e7; j+=i) prime[j] = 0;
		}
	}
	for(int i=1; i<wa.size(); i++) wa[i] += wa[i-1];

	ll q;
	scanf("%ld", &q);
	for(ll i=0; i<q; i++){
		ll l, r;
		scanf("%ld %ld", &l, &r);
		printf("%ld\n", wa[r]-wa[l-1]);
	}
	return 0;
}
