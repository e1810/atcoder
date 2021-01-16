#include<bits/stdc++.h>

int main(){
	int h, w;
	scanf("%d %d", &h, &w);
	int sx, sy, gx, gy;
	scanf("%d %d %d %d", &sx, &sy, &gx, &gy);
	sx--, sy--, gx--, gy--;
	char fie[h][w+1];
	for(int i=0; i<h; i++) scanf("%s", fie[i]);


	bool used[h][w][4] = {};
	int dx[] = {0, -1, 0, 1}, dy[] = {-1, 0, 1, 0};
	int tx = sx, ty = sy, angle = 0, ans = 0; //angle = {u, r, d, l};
	while(true){
		if(tx==gx && ty==gy){
			printf("%d\n", ans);
			return 0;
		}
		if(used[tx][ty][angle]){
			puts("-1");
			return 0;
		}

		used[tx][ty][angle] = true;
		for(int i=0; i<4; i++){
			int nx = tx + dx[(i+angle)%4], ny = ty + dy[(i+angle)%4];
			if(nx<0 || h<=nx || ny<0 || w<=ny || fie[nx][ny]=='#') continue;
			tx = nx;
			ty = ny;
			angle = (i+angle+3)%4;
			ans++;
			break;
		}
	}
	return 0;
}
