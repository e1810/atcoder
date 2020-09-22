#include<bits/stdc++.h>
using ll = int_fast64_t;

int main(){
	ll a, b, c, d;
	scanf("%ld %ld %ld %ld", &a, &b, &c, &d);
	printf("%ld
", std::max({a*c, b*d, a*d, b*c}));
	return 0;
}
