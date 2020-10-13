#include<bits/stdc++.h>
#define REP(i,b,e) for(int i=(b);i<(e);i++)
using P = std::pair<int,int>;

int main(){
	int n;
	scanf("%d", &n);

	char fie[n][n+1];
	REP(i, 0, n) scanf("%s", fie[i]);

	P st;
	REP(i, 0, n) REP(j, 0, n) {
		if(fie[i][j]=='S') st = P(i, j);
	}

	bool used[n][n] = {};
	std::queue<P> que;
	que.push(st);
	int ans = 0, dx[] = {0, 1, 0, -1}, dy[] = {1, 0, -1, 0};
	while(!que.empty()){
		P p = que.front();
		que.pop();
		if(used[p.first][p.second]) continue;
		used[p.first][p.second] = true;
		ans++;
		REP(i, 0, 4){
			int nx = p.first + dx[i], ny = p.second + dy[i];
			if(fie[nx][ny]=='.' && !used[nx][ny]) que.emplace(nx, ny);
		}
	}
	printf("%d\n", ans);
	return 0;
}


