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
	int n;
	scanf("%d", &n);
	int a[n];
	REP(i, 0, n) scanf("%d", &a[i]);

	int dp[n] = {};
	REP(i, 1, n) dp[i] = 1e9;
	REP(i, 0, n){
		if(i>0) dp[i] = std::min(dp[i], dp[i-1]+abs(a[i]-a[i-1]));
		if(i>1) dp[i] = std::min(dp[i], dp[i-2]+abs(a[i]-a[i-2]));
	}
	printf("%d
", dp[n-1]);
	return 0;
}
