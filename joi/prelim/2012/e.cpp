#include<bits/stdc++.h>
#define REP(i, b, e) for(int i=b;i<e;i++)
using P = std::pair<int,int>;

int main(){
	int w, h;
	scanf("%d %d", &w, &h);
	bool wall[h+2][w+2] = {};
	REP(i, 1, h+1){
		REP(j, 1, w+1){
			scanf("%d", &wall[i][j]);
		}
	}

	int dx0[] = {-1, -1, 0, 0, 1, 1};
	int dy0[] = {0, 1, -1, 1, 0, 1};

	int dx1[] = {-1, -1, 0, 0, 1, 1};
	int dy1[] = {-1, 0, -1, 1, -1, 0};

	int ans = 0;
	bool used[h+2][w+2] = {};
	std::queue<P> que;
	que.emplace(0, 0);
	while(!que.empty()){
		P tp = que.front();
		que.pop();
		if(used[tp.first][tp.second]) continue;
		used[tp.first][tp.second] = true;

		REP(i, 0, 6){
			int nx, ny;
			if(tp.first%2) nx = tp.first+dx0[i], ny = tp.second+dy0[i];
			else nx = tp.first+dx1[i], ny = tp.second+dy1[i];
			if(nx<0 or h+1<nx or ny<0 or w+1<ny) continue;

			if(wall[nx][ny]) ans++;
			else if(!used[nx][ny]){
				que.emplace(nx, ny);
			}
		}
	}

	printf("%d\n", ans);
	return 0;
}
