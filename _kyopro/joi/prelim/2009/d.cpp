#include<bits/stdc++.h>
using B = std::vector<std::vector<bool>>;

int main(){
	int w, h;
	scanf("%d %d", &w, &h);
	std::vector<std::vector<bool>> iced(h+2, std::vector<bool>(w+2, 0));
	for(int i=1; i<=h; i++){
		for(int j=1; j<=w; j++){
			int tmp;
			scanf("%d", &tmp);
			iced[i][j] = !!tmp;
		}
	}

	int dx[] = {0, 1, 0, -1}, dy[] = {1, 0, -1, 0};
	std::function<int(int,int,int,B)> dfs = [&](int sx, int sy, int depth, B iced){
		iced[sx][sy] = 0;
		int ret = depth;
		for(int i=0; i<4; i++){
			int nx = sx + dx[i], ny = sy + dy[i];
			if(iced[nx][ny]){
				ret = std::max(ret, dfs(nx, ny, depth+1, iced));
			}
		}
		iced[sx][sy] = 1;
		return ret;
	};

	int ans = 0;
	for(int i=1; i<=h; i++){
		for(int j=1; j<=w; j++){
			if(iced[i][j]) ans = std::max(ans, dfs(i, j, 0, iced));
		}
	}
	printf("%d\n", 1+ans);
	return 0;
}
	
