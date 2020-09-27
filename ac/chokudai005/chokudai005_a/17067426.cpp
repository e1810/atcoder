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
char fie[100][101], max = '1';

void dfs(int y, int x){
	char chain = fie[y][x];
	fie[y][x] = max;
	REP(i, 0, 4){
		int ny = y+dy[i], nx = x+dx[i];
		if(ny<0 or n<=ny or nx<0 or n<=nx) continue;
		if(fie[ny][nx]==chain) dfs(ny, nx);
	}
}


int main(){
	scanf("%d %d %d", &id, &n, &k);
	REP(i, 0, n) scanf("%s", fie[i]);

	int cnt[9] = {};
	REP(i, 0, n) REP(j, 0, n) cnt[fie[i][j]-'1']++;
	REP(i, 0, 9) if(cnt[max-'1']<cnt[i]) max = i+'1';

	std::vector<Ans> ques;
	REP(i, 0, n) REP(j, 0, n) {
		if(fie[i][j]!=max){
			dfs(i, j);
			ques.emplace_back(i+1, j+1, max-'0');
		}
	}
	printf("%ld
", ques.size());
	for(auto [y, x, c]: ques) printf("%d %d %d
", y, x, c);
	//REP(i, 0, n) puts(fie[i]);
	return 0;
}
