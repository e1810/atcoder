#include<bits/stdc++.h>
using ll = int_fast64_t;

int main(){
	ll n;
	scanf("%ld", &n);

	ll ans = 0, tmp = 1;
	while(tmp!=n){
		ans++;
		tmp *= ans;
	}
	
	printf("%ld\n", ans);
	return 0;
}

