#include<bits/stdc++.h>
using ll = int_fast64_t;

int main(){
	ll n, x, a = 0;
	scanf("%ld %ld", &n, &x);
	x *= n - 1;
	while(n--){
		ll tmp;
		scanf("%ld", &tmp);
		a += tmp;
	}
	printf("%ld\n", a - x);
	return 0;
}
