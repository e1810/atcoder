
#include<bits/stdc++.h>
using ll = int_fast64_t;
using P = std::pair<ll,ll>;
using PP = std::pair<P, ll>;
#define rep(i,s,g) for(int i=s; i<g; i++)

int h, w;
std::vector<std::vector<bool>> fie(22, std::vector<bool>(22, 1));;
int dx[] = {0, 1, 0, -1}, dy[] = {1, 0, -1, 0};

ll bfs(P sp){
	ll ret = 0;
	std::vector<std::vector<bool>> used(fie);
	std::queue<PP> que;
	que.push(PP(sp, 0));
	while(!que.empty()){
		P p;
		ll d;
		std::tie(p, d) = que.front();
		que.pop();
		if(used[p.first][p.second]) continue;
		used[p.first][p.second] = true;
		ret = std::max(ret, d);
		rep(i, 0, 4){
			ll nx = p.first + dx[i], ny = p.second + dy[i];
			if(!used[nx][ny]) que.push(PP(P(nx,ny), d+1));
		}
	}
	return ret;
}


int main(){
	scanf("%d %d", &h, &w);
	rep(i, 1, h+1){
		char s[w+1];
		scanf("%s", s);
		rep(j, 1, w+1) fie[i][j] = (s[j-1]=='#');
	}
	
	ll ans = 0;
	rep(sx, 1, h+1) rep(sy, 1, w+1){
		ans = std::max(ans, bfs(P(sx, sy)));
	}
	printf("%ld
", ans);
	return 0;
}
