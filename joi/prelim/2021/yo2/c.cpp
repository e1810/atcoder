#include<bits/stdc++.h>
#define REP(i,b,e) for(int i=b;i<e;i++)
using ll = int_fast64_t;
using P = std::pair<ll,ll>;

int main(){
	ll n, d, k;
	scanf("%ld %ld %ld", &n, &d, &k);

	P ps[1+n];
	REP(i, 1, n+1){
		scanf("%ld %ld", &ps[i].first, &ps[i].second);
		ps[i].first--;
	}
	ps[0] = P(0, -1);
	std::sort(ps, ps+1+n, [](P x, P y){
		return x.second < y.second;
	});

	ll dp[2][200010] = {};
	REP(i, 1, n+1){
		auto [p, s] = ps[i];
		dp[p][i] = std::max(dp[p][i], dp[p][i-1] + 1);
		dp[p^1][i] = std::max(dp[p^1][i], dp[p^1][i-1]);
		
		int l = 0, r = i+1;
		while(r-l>1){
			int mid = (r-l)/2 + l;
			if(ps[mid].second + d + dp[p^1][mid]*k + 1<= s){
				l = mid;
			}else r = mid;
		}
		dp[p][i] = std::max(dp[p][i], dp[p^1][l] + 1);
	}

	printf("%ld\n", std::max(dp[0][n], dp[1][n]));
	return 0;
}
		
