#include<bits/stdc++.h>
#define REP(i,b,e) for(int i=b; i<e; i++)
#define ALL(vec) vec.begin(),vec.end()
#define PRINT(vec) printf("[ ");for(auto &i:vec)printf("%ld ",i);puts("]");
#define fi first
#define se second

int dx[] = {0, 1, 0, -1}, dy[] = {1, 0, -1, 0};

struct Ans {
	int y, x, c;
	Ans(int y, int x, int c): y(y), x(x), c(c) {}
};

int id, n, k;
char orifie[100][101], fie[100][101], uni = '1';

void dfs(int y, int x){
	char chain = fie[y][x];
	fie[y][x] = uni;
	REP(i, 0, 4){
		int ny = y+dy[i], nx = x+dx[i];
		if(ny<0 or n<=ny or nx<0 or n<=nx) continue;
		if(fie[ny][nx]==chain) dfs(ny, nx);
	}
}


int main(){
	scanf("%d %d %d", &id, &n, &k);
	REP(i, 0, n) scanf("%s", fie[i]);
	REP(i, 0, n) REP(j, 0, n) orifie[i][j] = fie[i][j];

	int minq = 10001;
	std::vector<Ans> q;

	for(uni='1'; uni<='9'; uni++){
		REP(i, 0, n) REP(j, 0, n) fie[i][j] = orifie[i][j];
		std::vector<Ans> qcand;
		REP(i, 0, n) REP(j, 0, n) {
			if(fie[i][j]!=uni){
				dfs(i, j);
				qcand.emplace_back(i+1, j+1, uni-'0');
			}
		}
		if(qcand.size()<minq){
			minq = qcand.size();
			q = qcand;
		}
	}

	printf("%d
", minq);
	for(auto [y, x, c]: q) printf("%d %d %d
", y, x, c);
	//REP(i, 0, n) puts(fie[i]);
	return 0;
}
