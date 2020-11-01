#include<bits/stdc++.h>
using ll = int_fast64_t;
using P = std::pair<ll,ll>;
using PP = std::pair<ll,P>;

#define REP(i,b,e) for(int i=b; i<e; i++)
#define PRINT(vec) {printf("[ ");for(auto &i:vec)printf("%ld ",i);puts("]");}
#define fi first
#define se second

const int MOD = 1e9+7;
int dx[] = {0, 1, 0, -1, 1, 1, -1, -1}, dy[] = {1, 0, -1, 0, 1, -1, -1, 1};

int main(){
	int n, m;
	scanf("%d %d", &n, &m);
	ll h[n];
	REP(i, 0, n) scanf("%ld", &h[i]);
	std::sort(h, h+n);
	ll w[m];
	REP(i, 0, m) scanf("%ld", &w[i]);

	ll wa[n+2] = {}, wa2[n+2] = {};
	REP(i, 0, n+1){
		if(i&1){
			if(i>=2) wa[i] += wa[i-2];
			if(i>=3) wa[i] += labs(h[i-2]-h[i-3]);
		}else{
			if(i>=2) wa[i] += wa[i-2];
			if(i) wa[i] += labs(h[i-1]-h[i-2]);
		}
	}
	wa[n+1] = wa[n-1] + labs(h[n-1] - h[n-2]);

	for(int i=n+1; i>=0; i--){
		if(i&1){
			if(i+2<n+2) wa2[i] += wa2[i+2];
			if(i+1<n) wa2[i] += labs(h[i]-h[i+1]);
		}else{
			if(i+2<n+2) wa2[i] += wa2[i+2];
			if(i+2<n) wa2[i] += labs(h[i+1]-h[i+2]);
		}
	}


	ll ans = 1e18;
	for(ll x: w){
		ll pos = std::lower_bound(h, h+n, x) - h;
		ll tmp = wa[pos] + wa2[pos];
		if(pos&1) tmp += labs(x-h[pos-1]);
		else tmp += labs(x-h[pos]);
		ans = std::min(ans, tmp);
	}
	printf("%ld
", ans);
	return 0;
}
