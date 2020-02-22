#include<bits/stdc++.h>
using P = std::pair<int,int>;

int fie[12][12], used[12][12], dx[] = {0, 1, 0, -1}, dy[] = {1, 0, -1, 0};

int main(){
	for(int i=0; i<144; i++){
		used[i/12][i%12] = 0;
		fie[i/12][i%12] = 1;
	}
	
	for(int i=0; i<10; i++){
		char s[11];
		scanf("%s", s);
		for(int j=0; j<10; j++){
			fie[i+1][j+1] = (s[j]=='x');;
		}
	}

	int iss = 0;
	std::queue<P> que;
	for(int i=1; i<11; i++){
		for(int j=1; j<11; j++){
			if(fie[i][j] or used[i][j]) continue;
			iss++;
			que.push(P(i, j));
			while(!que.empty()){
				P p = que.front(); que.pop();
				used[p.first][p.second] = 1;
				for(int k=0; k<4; k++){
					int nx = p.first+dx[k], ny = p.second+dy[k];
					if(!fie[nx][ny] and !used[nx][ny]) que.push(P(nx,ny));
				}
			}
		}
	}
	
	bool flag = 0;
	for(int i=1; i<11; i++)for(int j=1; j<11; j++){
		if(!fie[i][j]) continue;
		int cnt = 0;
		for(int k=0; k<4; k++) cnt += (!fie[i+dx[k]][j+dy[k]]);
		if(cnt==iss) flag = 1;
		printf("%d\n", cnt);
	}
	
	if(flag) puts("YES");
	else puts("NO");
	return 0;
}
	
