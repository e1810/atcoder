#include<bits/stdc++.h>
using P = std::pair<int,int>;

int main(){
	int h, w;
	scanf("%d %d", &h, &w);
	
	P s, g;
	std::vector<std::vector<int>> mp(h, std::vector<int>(w));
	for(int i=0; i<h; i++){
		char st[512];
		scanf("%s", st);
		for(int j=0; j<w; j++){
			if(st[j]=='#') mp[i][j] = 1;
			else if(st[j]=='.') mp[i][j] = 0;
			else if(st[j]=='s'){
				s = P(i, j);
				mp[i][j] = 0;
			}else{
				g = P(i, j);
				mp[i][j] = 0;
			}
		}
	}

	std::vector<std::vector<int>> used(h, std::vector<int>(w, 0));
	int dx[] = {0, 1, 0, -1}, dy[] = {1, 0, -1, 0};
	std::stack<P> stk;
	stk.push(s);
	while(!stk.empty()){
		P p = stk.top(); stk.pop();
		used[p.first][p.second] = 1;
		if(p==g){
			puts("Yes");
			return 0;
		}
		for(int i=0; i<4; i++){
			int nx = p.first+dx[i], ny = p.second+dy[i];
			if(nx<0 || h<=nx || ny<0 || w<=ny || mp[nx][ny] || used[nx][ny]) continue;
			stk.push(P(nx, ny));
		}
	}
	puts("No");
	return 0;
}
