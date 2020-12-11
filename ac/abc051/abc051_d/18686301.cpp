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
	int dist[n][n];
	REP(i, 0, n) REP(j, 0, n) dist[i][j] = 1e9;
	int a[m], b[m], c[m];
	REP(i, 0, m){
		scanf("%d %d %d", &a[i], &b[i], &c[i]);
		a[i]--; b[i]--;
		dist[a[i]][b[i]] = dist[b[i]][a[i]] = c[i];
	}
	REP(k, 0, n) REP(i, 0, n) REP(j, 0, n) {
		dist[i][j] = std::min(dist[i][j], dist[i][k]+dist[k][j]);
	}
	
	int ans = 0;
	REP(i, 0, m){
		if(dist[a[i]][b[i]]!=c[i]) ans++;
	}
	printf("%d
", ans);
	return 0;
}
