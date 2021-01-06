#include<bits/stdc++.h>
using ll = int_fast64_t;
#define REP(i,b,e) for(int i=b; i<e; i++)

struct P {
	int x, y, hor, dis;
	P(int a, int b, int c, int d): x(a), y(b), hor(c), dis(d) {}
};

int main(){
	int h, w;
	scanf("%d %d", &h, &w);
	int sx, sy, gx, gy;
	scanf("%d %d %d %d", &sx, &sy, &gx, &gy);
	sx--, sy--, gx--, gy--;
	char fie[h][w+1];
	REP(i, 0, h) scanf("%s", fie[i]);

	int dist[h][w][2];
	REP(i, 0, h) REP(j, 0, w) dist[i][j][0] = dist[i][j][1] = -1;
	
	std::queue<P> que;
	que.emplace(sx, sy, 0, 0);
	que.emplace(sx, sy, 1, 0);
	while(!que.empty()){
		P p = que.front(); que.pop();
		if(dist[p.x][p.y][p.hor]>=0) continue;
		dist[p.x][p.y][p.hor] = p.dis;
		if(p.hor){
			if(p.x!=h-1 and fie[p.x+1][p.y]!='#') que.emplace(p.x+1, p.y, 0, p.dis+1);
			if(p.x!=0 and fie[p.x-1][p.y]!='#') que.emplace(p.x-1, p.y, 0, p.dis+1);
		}else{
			if(p.y!=w-1 and fie[p.x][p.y+1]!='#') que.emplace(p.x, p.y+1, 1, p.dis+1);
			if(p.y!=0 and fie[p.x][p.y-1]!='#') que.emplace(p.x, p.y-1, 1, p.dis+1);
		}
	}

	//REP(i, 0, h){REP(j, 0, w) printf("%d ", dist[i][j][0]); puts("");}
	//REP(i, 0, h){REP(j, 0, w) printf("%d ", dist[i][j][1]); puts("");}

	int a = dist[gx][gy][0], b = dist[gx][gy][1];
	if(a<0 xor b<0) printf("%d
", std::max(a, b));
	else printf("%d
", std::min(a, b));
	return 0;
}
