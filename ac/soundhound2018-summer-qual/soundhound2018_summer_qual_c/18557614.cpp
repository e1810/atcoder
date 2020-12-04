#include<bits/stdc++.h>
using ll = int_fast64_t;
const int MOD = 1e9+7;

int main(){
	ll n, m, d;
	scanf("%ld %ld %ld", &n, &m, &d);
	printf("%lf
", (1+!!d) * (n-d) / double(n*n) * (m-1));
	return 0;
}
