#include<bits/stdc++.h>
#define REP(i,b,e) for(int i=(b);i<(e);i++)
using ll = int_fast64_t;

int main(){
	ll n;
	scanf("%ld", &n);
	ll a[n];
	REP(i, 0, n) scanf("%ld", &a[i]);

	ll f = 0, u = 0, l = 0, ans = 1e18;
	std::function<void(ll)> dfs = [&](int idx){
		if(idx==n){
			ans = std::min(ans, std::max({f,u,l}) - std::min({f,u,l}));
			return;
		}
		
		f += a[idx];
		dfs(idx+1);
		f -= a[idx];
		u += a[idx];
		dfs(idx+1);
		u -= a[idx];
		l += a[idx];
		dfs(idx+1);
		l -= a[idx];
	};

	dfs(0);
	printf("%ld\n", ans);
	return 0;
}
