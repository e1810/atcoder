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

	int cnt = 0;
	REP(i, 0, h) REP(j, 0, w) {
		if(fie[i][j]=='.') cnt++;
	}

	bool used[h][w] = {};
	int dist = -1;
	std::queue<PP> que;
	que.emplace(1, P(0,0));
	while(!que.empty()){
		auto [d, p] = que.front();
		que.pop();
		if(used[p.first][p.second]) continue;
		used[p.first][p.second] = true;
		if(p.first==h-1 and p.second==w-1) dist = d;
		REP(i, 0, 4){
			int nx = p.first+dx[i], ny = p.second+dy[i];
			if(nx<0 or h<=nx or ny<0 or w<=ny) continue;
			if(fie[nx][ny]=='#' or used[nx][ny]) continue;
			que.emplace(d+1, P(nx, ny));
		}
	}
	
	if(dist<0) puts("-1");
	else printf("%d
", cnt - dist);
	return 0;
}
