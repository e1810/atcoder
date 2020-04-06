
#include<bits/stdc++.h>
using ll = int_fast64_t;
using P = std::pair<ll,ll>;

int main(){
	ll n, a, b, c, d, e;
	scanf("%ld %ld %ld %ld %ld %ld", &n, &a, &b, &c, &d, &e);
	ll x = std::min({a, b, c, d, e});
	printf("%ld
", 4+(n+x-1)/x);
	return 0;
}
