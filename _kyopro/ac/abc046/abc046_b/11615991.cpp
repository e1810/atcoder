
#include<bits/stdc++.h>
using ll = int_fast64_t;
using P = std::pair<ll,ll>;

int main(){
	int n, k;
	scanf("%d %d", &n, &k);
	ll ans = k;
	for(int i=0; i<n-1; i++) ans *= k-1;
	printf("%ld
", ans);
	return 0;
}
