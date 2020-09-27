#include<bits/stdc++.h>
#include<atcoder/dsu>
#define REP(i,b,e) for(int i=b; i<e; i++)

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
	
	std::vector<Ans> q;
	atcoder::dsu uf(n*n);
	REP(i, 0, n) REP(j, 0, n) {
		std::vector<std::pair<int,int>> go2;
		REP(w, 0, 4){
			int ny = i+dy[w], nx = j+dx[w];
			if(ny<0 or n<=ny or nx<0 or n<=nx or fie[i][j]==fie[ny][nx]) continue;
			bool ok = true;
			for(auto [Y, X]: go2) if(uf.same(Y*n+X, ny*n+nx)) ok = false;
			if(ok) go2.emplace_back(ny, nx);
		}
		if(go2.size()==0) continue;
		int cnt[9] = {};
		for(auto [ny, nx]: go2){
			cnt[fie[ny][nx]-'1'] += uf.size(ny*n+nx);
		}
		int nextc = 0;
		REP(w, 0, 9) if(cnt[w]>cnt[nextc]) nextc = w;
		q.emplace_back(i+1, j+1, nextc+1);
		uni = nextc + '1';
		dfs(i, j);
	}

	printf("%ld
", q.size());
	for(auto [y, x, c]: q) printf("%d %d %d
", y, x, c);
	//REP(i, 0, n) puts(fie[i]);
	return 0;
}
