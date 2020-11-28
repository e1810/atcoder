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
	int a, b, x, y;
	scanf("%d %d %d %d", &a, &b, &x, &y);

	int dp[101][2];
	REP(i, 0, 101) dp[i][0] = dp[i][1] = 1e9;
	dp[a][0] = 0;
	for(int i=a; i>=0; i--){
		dp[i][1] = std::min({dp[i][1], dp[i+1][1]+y, dp[i+1][0]+x});
		dp[i][0] = std::min({dp[i][0], dp[i+1][0]+y, dp[i][1]+x});
		dp[i][1] = std::min(dp[i][1], dp[i][0]+x);
	}

	REP(i, a, 101){
		dp[i][0] = std::min({dp[i][0], dp[i-1][0]+y, dp[i-1][1]+x});
		dp[i][1] = std::min({dp[i][1], dp[i-1][1]+y, dp[i][0]+x});
		dp[i][0] = std::min(dp[i][0], dp[i][1]+x);
	}
	printf("%d
", dp[b][1]);
	return 0;
}
