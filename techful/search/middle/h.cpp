#include<bits/stdc++.h>
#define REP(i,b,e) for(int i=(b);i<(e);i++)
using P = std::pair<int,int>;

int main(){
	int h, w;
	char g;
	scanf("%d %d %c", &h, &w, &g);
	char fie[h][w+1];
	REP(i, 0, h) scanf("%s", fie[i]);

	std::queue<P> que;
	REP(i, 0, h) REP(j, 0, w) {
		if(fie[i][j]=='A') que.emplace(i, j);
	}

	bool ok = false, used[h][w] = {};
	int dx[] = {0, 1, 0, -1}, dy[] = {1, 0, -1, 0};
	while(!que.empty()){
		P p = que.front();
		que.pop();
		if(used[p.first][p.second]) continue;
		used[p.first][p.second] = true;
		if(fie[p.first][p.second]==g) ok = true;
		REP(i, 0, 4){
			int nx = p.first + dx[i], ny = p.second + dy[i];
			if(fie[nx][ny] == fie[p.first][p.second]+1){
				if(!used[nx][ny]) que.emplace(nx, ny);
			}
		}
	}

	if(ok) puts("Yes");
	else puts("No");
	return 0;
}




