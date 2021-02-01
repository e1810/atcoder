#include<bits/stdc++.h>
using ll = int_fast64_t;
using P = std::pair<ll,ll>;
#define REP(i,b,e) for(int i=b; i<e; i++)

int main(){
	int n;
	scanf("%d", &n);
	ll x[n], y[n];
	REP(i, 0, n) scanf("%ld %ld", &x[i], &y[i]);

	std::map<P, int> mp;
	REP(i, 0, n) REP(j, i+1, n) {
		ll dx = x[j] - x[i], dy = y[j] - y[i];
		if(dx==0){
			mp[P(0, labs(dy))]++;
			continue;
		}
		if(dy==0){
			mp[P(labs(dx), 0)]++;
			continue;
		}

		if(dx>0) mp[P(dx,dy)]++;
		else mp[P(-dx,-dy)]++;
	}

	int max = 0;
	for(auto [k,v]: mp) max = std::max(max, v);
	printf("%d
", n - max);
	return 0;
}
