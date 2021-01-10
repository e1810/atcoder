#include<bits/stdc++.h>
using ll = int_fast64_t;
#define REP(i,b,e) for(int i=b; i<e; i++)

int main(){
	int n, m;
	scanf("%d %d", &n, &m);
	ll a[n];
	REP(i, 0, n) scanf("%ld", &a[i]);

	std::vector<int> links[n];
	REP(i, 0, m){
		int x, y;
		scanf("%d %d", &x, &y);
		links[x-1].push_back(y-1);
	}

	bool used[n] = {};
	ll min[n], ans = -1e18;
	REP(i, 0, n) min[i] = 1e18;
	REP(i, 0, n){
		ans = std::max(ans, a[i]-min[i]);
		for(auto to: links[i]){
			min[to] = std::min({min[to], min[i], a[i]});
		}
	}
	printf("%ld
", ans);
	return 0;
}
