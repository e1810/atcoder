#include<bits/stdc++.h>
using ll = int_fast64_t;

ll F(ll a, ll b){
	ll x = 0, y = 0;
	while(a) a/=10, x++;
	while(b) b/=10, y++;
	return std::max({1l, x, y});
}

int main(){
	ll n, ans = 1e18;;
	scanf("%ld", &n);
	for(ll i=1; i*i<=n; i++){
		if(n%i==0) ans = std::min(ans, F(i, n/i));
	}
	printf("%ld
", ans);
	return 0;
}
