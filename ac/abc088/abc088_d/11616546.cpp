
#include<bits/stdc++.h>
using ll = int_fast64_t;
using P = std::pair<ll,ll>;
using PP = std::pair<P,ll>;

int main(){
	int h, w, ans = 0;
	scanf("%d %d", &h, &w);
	std::vector<std::vector<bool>> fie(h+2, std::vector<bool>(w+2, true));
	for(int i=1; i<=h; i++){
		char s[w+1];
		scanf("%s", s);
		for(int j=1; j<=w; j++){
			fie[i][j] = (s[j-1]=='#');
			ans += (s[j-1]=='.');
		}
	}
	
	int dx[] = {0, 1, 0, -1}, dy[] = {1, 0, -1, 0};	

	int dist = INT_MAX;
	std::queue<PP> que;
	que.push(PP(P(1,1), 0));
	while(!que.empty()){
		P p = que.front().first;
		int x=p.first, y=p.second, d=que.front().second;
		que.pop();
		if(x==h && y==w) dist = d;
		if(fie[x][y]) continue;
		fie[x][y] = true;
		for(int i=0; i<4; i++){
			int nx = x + dx[i], ny = y + dy[i];
			if(!fie[nx][ny]) que.push(PP(P(nx,ny), d+1));
		}
	}

	if(dist==INT_MAX) puts("-1");
	else printf("%d
", ans-dist-1);
	return 0;
}
