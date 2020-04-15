
#include<bits/stdc++.h>
using ll = int_fast64_t;

std::vector<ll> divisor(ll n){
        std::vector<ll> ret;
        for(ll i=1; i*i<=n; i++){
                if(n%i == 0){
                        ret.push_back(i);
                        if(i*i != n) ret.push_back(n/i);
                }
        }
        std::sort(ret.begin(), ret.end());
        return ret;
}

int main(){
	ll n;
	scanf("%ld", &n);

	ll ans = 0;
	for(ll i: divisor(n)){
		if(i==1) continue;
		ll m = n;
		while(m%i==0) m /= i;
		if(m%i==1) ans++;
	}	
	for(ll i: divisor(n-1)){
		if(n%i==1) ans++;
	}
	printf("%ld
", ans);
}
