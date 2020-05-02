
#include<bits/stdc++.h>
using ll = int_fast64_t;

ll lcm(ll a, ll b){
	if(a==0) return b;
	else return a*b/std::__gcd(a, b);
}

int main(){
	ll n, m, ans = 0, prev = -1;
	scanf("%ld %ld", &n, &m);
	
	bool cant = false;
	for(ll i=0; i<n; i++){
		ll tmp;
		scanf("%ld", &tmp);
		ans = lcm(ans, tmp/2);
		
		ll cnt = 0;
		while(tmp%2==0) tmp/=2, cnt++;
		if(prev>=0 and prev!=cnt) cant = true;
		prev = cnt;
	}
	
	if(cant) puts("0");
	else printf("%ld
", (m / ans + 1) / 2);
	return 0;
}
