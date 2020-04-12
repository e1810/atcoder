
#include<bits/stdc++.h>
using ll = int_fast64_t;
using P = std::pair<ll,ll>;

int main(){
	int n, a, b;
	scanf("%d %d %d", &n, &a, &b);
	printf("%d
", std::min(n*a, b));
	return 0;	
}
