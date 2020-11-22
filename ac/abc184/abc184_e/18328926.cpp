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
	
	int sx, sy, gx, gy;
	REP(i, 0, h) REP(j, 0, w){
		if(fie[i][j]=='S') sx = i, sy = j;
		if(fie[i][j]=='G') gx = i, gy = j;
	}
	
	int dist[h][w] = {};
	REP(i, 0, h) REP(j, 0, w) dist[i][j] = 1e9;
	bool used[h][w] = {}, alp[26] = {};

	std::queue<PP> que;
	que.emplace(0, P(sx, sy));
	while(!que.empty()){
		auto [d, p] = que.front();
		auto [x, y] = p;
		que.pop();
		if(used[x][y]) continue;
		used[x][y] = true;
		dist[x][y] = d;
		REP(i, 0, 4){
			int nx = x+dx[i], ny = y+dy[i];
			if(nx<0 or h<=nx or ny<0 or w<=ny) continue;
			if(fie[nx][ny]!='#') que.emplace(d+1, P(nx, ny));
		}
		if(fie[x][y]-'a'<0 or alp[fie[x][y]-'a']) continue;
		alp[fie[x][y]-'a'] = true;
		REP(i, 0, h) REP(j, 0, w) if(fie[i][j]==fie[x][y]) {
			que.emplace(d+1, P(i, j));
		}
	}
	if(dist[gx][gy]!=1e9) printf("%d
", dist[gx][gy]);
	else puts("-1");
	return 0;
}
