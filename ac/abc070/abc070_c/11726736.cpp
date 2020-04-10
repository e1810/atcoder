
#include<bits/stdc++.h>
using ll = int_fast64_t;

ll lcm(ll a, ll b){
	if(a==0) return b;
	else return a / std::__gcd(a, b) * b;
}

int main(){
	int n;
	ll ans = 0;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		ll t;
		scanf("%ld", &t);
		ans = lcm(ans, t);
	}
	printf("%ld
", ans);
	return 0;
}
