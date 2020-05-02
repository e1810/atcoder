
#include<bits/stdc++.h>
using ll = int_fast64_t;

int main(){
	ll a, b, x;
	scanf("%ld %ld %ld", &a, &b, &x);
	printf("%ld
", b/x-a/x+!(a%x));
	return 0;
}
