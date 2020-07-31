#include<bits/stdc++.h>

struct P {
	int x, y, d;
	P (int x, int y, int d): x(x), y(y), d(d) {}
};

int main(){
	int h, w;
	scanf("%d %d", &h, &w);
	int sx, sy;
	scanf("%d %d", &sx, &sy);
	sy--, sx--;
	int gx, gy;
	scanf("%d %d", &gx, &gy);
	gy--, gx--;
	char fie[h+1][w+1];
	for(int i=0; i<h; i++){
		scanf("%s", fie[i]);
	}


	bool used[h+1][w+1] = {};
	std::queue<P> que;
	que.emplace(sx, sy, 0);
	while(!que.empty()){
		auto [x, y, d] = que.front();
		que.pop();
		if(used[x][y]) continue;
		used[x][y] = true;
		if(x==gx && y==gy){
			printf("%d
", d);
		}
		if(!used[x-1][y] && fie[x-1][y]!='#') que.emplace(x-1, y, d+1);
		if(!used[x][y-1] && fie[x][y-1]!='#') que.emplace(x, y-1, d+1);
		if(!used[x+1][y] && fie[x+1][y]!='#') que.emplace(x+1, y, d+1);
		if(!used[x][y+1] && fie[x][y+1]!='#') que.emplace(x, y+1, d+1);
	}
	return 0;
}
