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

const int MOD = 1e9+7;
const ll INF = 1e18;
int dx[] = {0, 1, 0, -1, 1, 1, -1, -1}, dy[] = {1, 0, -1, 0, 1, -1, -1, 1};

int main(){
	int n, m;
	scanf("%d %d", &n, &m);
	ll l = 1<<n;
	ll dp[1+m][l];
	REP(i, 0, 1+m) REP(j, 0, l) dp[i][j] = 1e18;
	dp[0][0] = 0;

	REP(i, 0, m){
		char s[n];
		ll c;
		scanf("%s %ld", s, &c);
		REP(j, 0, l){
			dp[i+1][j] = std::min(dp[i+1][j], dp[i][j]);
			ll r = j;
			REP(k, 0, n) r |= (s[k]=='Y') << k;
			dp[i+1][r] = std::min(dp[i+1][r], dp[i][j]+c);
		}
	}
	if(dp[m][l-1]==1e18) puts("-1");
	else printf("%ld
", dp[m][l-1]);
	return 0;
}
