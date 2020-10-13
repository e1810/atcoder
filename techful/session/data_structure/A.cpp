#include<bits/stdc++.h>
using ll = int_fast64_t;

int main(){
	ll a, b, c;
	scanf("%ld %ld %ld", &a, &b, &c);
	if(a*a + b*b == c*c) puts("Yes");
	else puts("No");
	return 0;
}
