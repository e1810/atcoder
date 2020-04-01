
#include<bits/stdc++.h>
using ll = int_fast64_t;
using P = std::pair<ll,ll>;

int main(){
	int n, m;
	scanf("%d %d", &n, &m);
	std::vector<P> ab(n);
	for(int i=0; i<n; i++) scanf("%ld %ld", &ab[i].first, &ab[i].second);
	std::sort(ab.begin(), ab.end());
	
	ll ans = 0;
	for(P p: ab){
		if(m<=0) break;
		if(m>=p.second){
			ans += p.first * p.second;
			m -= p.second;
		}else{
			ans += p.first * m;
			m = 0;
		}
	}
	printf("%ld
", ans);
	return 0;
}
