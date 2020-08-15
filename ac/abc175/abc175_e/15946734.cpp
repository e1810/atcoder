#pragma target("avx")
#pragma optimize("O3")
#include<bits/stdc++.h>
using ll = int_fast64_t;
using P = std::pair<ll,ll>;

#define REP(i,b,e) for(ll i=b; i<e; i++)
#define ALL(vec) vec.begin(),vec.end()
#define PRINT(vec) printf("[ ");for(auto &i:vec)printf("%ld ",i);puts("]");
#define SCAN(vec) for(auto &i:vec)scanf("%ld",&i)
#define fi first
#define se second


ll h, w, K;
ll val[3000][3000] = {};
ll dp[3000][3000][4] = {};

int main(){
	scanf("%ld %ld %ld", &h, &w, &K);
	
	REP(i, 0, K){
		ll r, c, v;
		scanf("%ld %ld %ld", &r, &c, &v);
		val[r-1][c-1] = v;
	}

	//REP(i, 0, h){PRINT(val[i]);}

	dp[0][0][1] = val[0][0];
	REP(i, 0, h){
		REP(j, 0, w){
			REP(k, 0, 4){
				if(i>=1) dp[i][j][0] = std::max(dp[i][j][0], dp[i-1][j][k]);
				if(j>=1) dp[i][j][k] = std::max(dp[i][j][k], dp[i][j-1][k]);
			
			}
			REP(k, 1, 4){
				if(j>=1) dp[i][j][k] = std::max(dp[i][j][k], dp[i][j-1][k-1]+val[i][j]);
			}
			REP(k, 1, 5){
				if(i>=1) dp[i][j][1] = std::max(dp[i][j][1], dp[i-1][j][k-1]+val[i][j]);
			}
		}
	}
	
	/*
	REP(i, 0, h){
		REP(j, 0, w){
			REP(k, 0, 4) printf("%ld ", dp[i][j][k]);
			printf("   ");
		}
		puts("");
	}
	*/

	ll ans = 0;
	REP(i, 0, 4){
		ans = std::max(ans, dp[h-1][w-1][i]);
	}
	printf("%ld
", ans);
	return 0;
}
