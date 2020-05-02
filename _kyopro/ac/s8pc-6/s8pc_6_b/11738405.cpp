
#include<bits/stdc++.h>
using ll = int_fast64_t;

int main(){
	int n;
	scanf("%d", &n);
	
	std::vector<ll> a(n), b(n);
	for(int i=0; i<n; i++) scanf("%ld %ld", &a[i], &b[i]);
	std::sort(a.begin(), a.end());
	std::sort(b.begin(), b.end());

	ll mida, midb;
	if(n%2) mida = a[n/2], midb = b[n/2];
	else mida = (a[n/2-1]+a[n/2])/2, midb = (b[n/2-1]+b[n/2])/2;
	
	ll ans = (midb-mida) * n;
	for(int i=0; i<n; i++) ans += 2*std::max(0l, mida-a[i]) + 2*std::max(0l, b[i]-midb);
	printf("%ld
", ans);
	return 0;
}
