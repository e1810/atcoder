
#include<bits/stdc++.h>
using ll = int_fast64_t;
using P = std::pair<ll,ll>;

int main(){
	int n;
	scanf("%d", &n);
	std::vector<P> ab(n);
	for(int i=0; i<n; i++) scanf("%ld %ld", &ab[i].first, &ab[i].second);
	std::sort(ab.begin(), ab.end(), [](P x, P y){
		return x.second < y.second;
	});
	
	ll now = 0;
	bool cant = false;
	for(P p: ab){
		ll a, b;
		std::tie(a, b) = p;
		now += a;
		if(now>b) cant = true;
	}
	
	if(cant) puts("No");
	else puts("Yes");
	return 0;
}
