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
	ll dist[n][n];
	REP(i, 0, n) REP(j, 0, n) dist[i][j] = 1e18;
	REP(i, 0, m){
		int a, b, c;
		scanf("%d %d %d", &a, &b, &c);
		dist[a-1][b-1] = dist[b-1][a-1] = c;
	}
	
	REP(k, 1, n) REP(i, 1, n) REP(j, 1, n) {
		dist[i][j] = std::min(dist[i][j], dist[i][k] + dist[k][j]);
	}

	ll ans = LONG_MAX;
	REP(i, 1, n) REP(j, i+1, n) {
		ans = std::min(ans, dist[0][i] + dist[i][j] + dist[j][0]);
	}
	if(ans>=1e18) puts("-1");
	else printf("%ld
", ans);
	return 0;
}
