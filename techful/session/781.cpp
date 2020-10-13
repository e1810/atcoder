#include<cstdio>
#include<queue>


struct P {
	bool tech = true;
	int x=0, y=0;
	P(bool a, int b, int c): tech(a), x(b), y(c) {}
};


int main(){
	int h, w, k;
	scanf("%d %d %d", &h, &w, &k);
	char fie[h][w+1] = {};
	for(int i=0; i<h; i++) scanf("%s", fie[i]);

	std::queue<P> que;
	std::queue<P> vyque;
	for(int i=0; i<h; i++) for(int j=0; j<w; j++) {
		if(fie[i][j]=='s'){
			que.emplace(true, i, j);
			fie[i][j] = '.';
		}
		if(fie[i][j]=='*'){
			vyque.emplace(false, i, j);
			fie[i][j] = '.';
		}
	}
	while(!vyque.empty()){
		que.push(vyque.front());
		vyque.pop();
	}

	bool ok = false;
	int dx[] = {0, 1, 0, -1}, dy[] = {1, 0, -1, 0};
	while(!que.empty()){
		P p = que.front(); que.pop();
		if(fie[p.x][p.y]=='x') continue;
		fie[p.x][p.y] = 'x';
		if(p.tech){
			for(int i=0; i<4; i++){
				int nx = p.x + dx[i], ny = p.y + dy[i];
				if(nx<0 or h<=nx or ny<0 or w<=ny) continue;
				if(fie[nx][ny]=='.') que.emplace(true, nx, ny);
				if(fie[nx][ny]=='t') ok = true;
			}
		}else{
			for(int i=0; i<4; i++){
				int nx = p.x + dx[i], ny = p.y + dy[i];
				if(nx<0 or h<=nx or ny<0 or w<=ny) continue;
				if(fie[nx][ny]=='.' or fie[nx][ny]=='t'){
					que.emplace(false, nx, ny);
				}
			}
		}
		//for(int i=0; i<h; i++) puts(fie[i]); puts("");
	}

	if(ok) puts("Yes");
	else puts("No");
	return 0;
}

