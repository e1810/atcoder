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
	int h, w;
	scanf("%d %d", &h, &w);
	char fie[h][w+1];
	REP(i, 0, h) scanf("%s", fie[i]);

	
	ll dp[h][w] = {}, dpH[h][w] = {}, dpV[h][w] = {}, dpD[h][w] = {};
	dp[0][0] = dpV[0][0] = dpH[0][0] = dpD[0][0] = 1;

	REP(i, 0, h) REP(j, 0, w) {
		if(fie[i][j]=='#') continue;

		if(i>0) dp[i][j] = (dp[i][j] + dpV[i-1][j]) % MOD;
		if(j>0) dp[i][j] = (dp[i][j] + dpH[i][j-1]) % MOD;
		if(i>0 && j>0) dp[i][j] = (dp[i][j] + dpD[i-1][j-1]) % MOD;

		if(i>0) dpV[i][j] = (dp[i][j] + dpV[i-1][j]) % MOD;
		if(j>0) dpH[i][j] = (dp[i][j] + dpH[i][j-1]) % MOD;
		if(i>0 && j>0) dpD[i][j] = (dp[i][j] + dpD[i-1][j-1]) % MOD;

		if(i>0 && j==0){
			dpH[i][0] = (dpH[i][0] + dp[i][0]) % MOD;
			dpD[i][0] = (dpD[i][0] + dp[i][0]) % MOD;
		}
		if(i==0 && j>0){
			dpV[0][j] = (dpV[0][j] + dp[0][j]) % MOD;
			dpD[0][j] = (dpD[0][j] + dp[0][j]) % MOD;
		}
	}

	printf("%ld
", dp[h-1][w-1]);
	return 0;
}
