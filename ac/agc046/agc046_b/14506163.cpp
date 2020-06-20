#pragma target("avx")
#pragma optimize("O3")
#include<bits/stdc++.h>
using ll = int_fast64_t;
using P = std::pair<ll,ll>;
using PP = std::pair<ll,P>;
using V = std::vector<ll>;
template<typename T> using pq = std::priority_queue<T>;
template<typename T> using rpq = std::priority_queue<T, std::vector<T>, std::greater<T>>;

#define REP(i,b,e) for(ll i=b; i<e; i++)
#define ALL(vec) vec.begin(),vec.end()
#define PRINT(vec) printf("[ ");for(auto &i:vec)printf("%ld ",i);puts("]");
#define SCAN(vec) for(auto &i:vec)scanf("%ld",&i)
#define fi first
#define se second

const int MOD = 998244353;
const ll INF = 1e18;
int dx[] = {0, 1, 0, -1, 1, 1, -1, -1}, dy[] = {1, 0, -1, 0, 1, -1, -1, 1};

int main(){
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	ll inv2 = 1, m = MOD-2, x = 2;
	while(m){
		if(m&1) inv2 = inv2 * x % MOD;
		x = x * x % MOD;
		m >>= 1;
	}
	
	ll dp[c+1][d+1] = {};
	dp[a][b] = 1;
	REP(j, b+1, d+1) dp[a][j] = dp[a][j-1] * a % MOD;
	REP(i, a+1, c+1) dp[i][b] = dp[i-1][b] * b % MOD;

	REP(i, a+1, c+1){
		REP(j, b+1, d+1){
			dp[i][j] = (dp[i-1][j]*j%MOD + dp[i][j-1]*i%MOD) % MOD;
			dp[i][j] -= dp[i-1][j-1]*(i-1)%MOD * (j-1)%MOD;
			if(dp[i][j]<0) dp[i][j] += MOD;
		}
	}

	//REP(i, 0, c+1){REP(j, 0, d+1)printf("%ld ", dp[i][j]);puts("");}puts("");

	printf("%ld
", dp[c][d]);
	return 0;
}
