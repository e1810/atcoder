#include<bits/stdc++.h>
using ll = int_fast64_t;
using P = std::pair<ll,ll>;

#define REP(i,b,e) for(ll i=b; i<e; i++)
#define fi first
#define se second

int dx[] = {0, 1, 0, -1, 1, 1, -1, -1}, dy[] = {1, 0, -1, 0, 1, -1, -1, 1};

int main(){
	int h, w, t;
	scanf("%d %d %d", &h, &w, &t);
	
	char fie[h][w+1];
	REP(i, 0, h) scanf("%s", fie[i]);

	int sx, sy, gx, gy;
	REP(i, 0, h) REP(j, 0, w) {
	    if(fie[i][j]=='S') sx=i, sy=j;
	    if(fie[i][j]=='G') gx=i, gy=j;
	}

	int cost[h][w][110] = {};
	REP(i, 0, h) REP(j, 0, w) REP(k, 0, 110) cost[i][j][k] = 1e9;
	
	std::queue<std::pair<P,P>> que;
	que.emplace(P(sx,sy), P(0, 0));
	while(!que.empty()){
	    auto [p, bw] = que.front();
	    que.pop();
	    if(bw.fi>105 or cost[p.fi][p.se][bw.fi] <= bw.se) continue;
	    cost[p.fi][p.se][bw.fi] = bw.se;
	    REP(i, 0, 4){
		int tx=p.fi+dx[i], ty=p.se+dy[i];
		if(tx<0 || h<=tx || ty<0 || w<=ty) continue;
		if(fie[tx][ty]=='#') que.emplace(P(tx,ty), P(bw.fi+1,bw.se));
		else que.emplace(P(tx,ty), P(bw.fi,bw.se+1));
	    }
	}
	
	int ans = 0;
	REP(i, 1, 101) {
	    ans = std::max<ll>(ans, (t-cost[gx][gy][i])/i);
	}
	printf("%d
", ans);
	return 0;
}
