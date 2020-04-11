
#include<bits/stdc++.h>

struct P {
	int x, y, d;
	P(int a, int b, int c): x(a), y(b), d(c) {}
};

int main(){
        int h, w, sx, sy, gx, gy;
        scanf("%d %d %d %d %d %d", &h, &w, &sx, &sy, &gx, &gy);
        std::vector<std::vector<int>> fie(h, std::vector<int>(w, 1));
        for(int i=0; i<h; i++){
		char s[w+1]; scanf("%s", s);
		for(int j=0; j<w; j++) fie[i][j] = (s[j]=='#');
	}

	int dx[] = {0, 1, 0, -1}, dy[] = {1, 0, -1, 0};

	int ans = -1;
	std::queue<P> que;
	que.emplace(sx-1, sy-1, 0);
	while(!que.empty()){
		P p = que.front();
		que.pop();
		int x=p.x, y=p.y, d=p.d;
		if(fie[x][y]) continue;
		fie[x][y] = 1;
		if(x==gx-1 && y==gy-1) ans = d;
		for(int i=0; i<4; i++){
			int nx = x + dx[i], ny = y + dy[i];
			if(!fie[nx][ny]) que.emplace(nx,ny, d+1);
		}
	}

        printf("%d
", ans);
        return 0;
}
