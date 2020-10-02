#include<bits/stdc++.h>
#define REP(i,b,e) for(int i=b; i<e; i++)

struct Area {
	int u=1e9, d=-1e9, l=1e9, r=-1e9;
};

int wa[10][1001][1001] = {};

int main(){
int q;
scanf("%d", &q);
while(q--){
	int h, w;
	scanf("%d %d", &h, &w);
	char fie[h][w+1];
	REP(i, 0, h) scanf("%s", fie[i]);
	

	REP(x, 0, 10) REP(i, 0, h+1) REP(j, 0, w+1) wa[x][i][j] = 0;
	Area area[10];
	REP(i, 0, h) REP(j, 0, w) {
		wa[fie[i][j]-'A'][i+1][j+1]++;
		area[fie[i][j]-'A'].u = std::min(area[fie[i][j]-'A'].u, i);
		area[fie[i][j]-'A'].d = std::max(area[fie[i][j]-'A'].d, i);
		area[fie[i][j]-'A'].l = std::min(area[fie[i][j]-'A'].l, j);
		area[fie[i][j]-'A'].r = std::max(area[fie[i][j]-'A'].r, j);
	}
	REP(x, 0, 10) REP(i, 0, h+1) REP(j, 0, w) wa[x][i][j+1] += wa[x][i][j];
	REP(x, 0, 10) REP(j, 0, w+1) REP(i, 0, h) wa[x][i+1][j] += wa[x][i][j];

	int ans = 0;
	REP(i, 1, 1<<10){
		bool ok = true;
		Area x;
		REP(j, 0, 10) if((i>>j)&1) {
			if(area[j].u == 1e9) ok = false;
			x.u = std::min(x.u, area[j].u);
			x.d = std::max(x.d, area[j].d);
			x.l = std::min(x.l, area[j].l);
			x.r = std::max(x.r, area[j].r);
		}
		if(!ok) continue;
		REP(j, 0, 10) if(((i>>j)&1)==0) {
			if(area[j].u == 1e9) continue;
			if(wa[j][x.d+1][x.r+1] - wa[j][x.u][x.r+1] - wa[j][x.d+1][x.l] + wa[j][x.u][x.l]) ok = false;
		}
		if(ok) ans++;
	}
	printf("%d\n", ans);
}
return 0;
}



		
