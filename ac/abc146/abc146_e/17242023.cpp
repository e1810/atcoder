#include<bits/stdc++.h>
using ll = int_fast64_t;
#define REP(i,b,e) for(ll i=b; i<e; i++)

int main(){
	ll n, k;
	scanf("%ld %ld", &n, &k);
	std::map<ll,ll> mp;
	ll a[1+n] = {};
	REP(i, 1, 1+n){
		scanf("%ld", &a[i]);
		a[i] = (a[i]-1 + a[i-1]) % k;
		if(i<k) mp[a[i]]++;
	}
	mp[0]++;
	
	ll ans = 0;
	REP(i, 0, 1+n){
		--mp[a[i]];
		ans += mp[a[i]];
		if(i+k<=n) mp[a[i+k]]++;
	}
	printf("%ld
", ans);
	return 0;
}
