#include<bits/stdc++.h>
using P = std::pair<int,int>;
#define REP(i,b,e) for(int i=b; i<e; i++)

int main(){
	int n;
	scanf("%d", &n);

	char links[n][n+1];
	REP(i, 0, n) scanf("%s", links[i]);

	int ans = -1;
	REP(st, 0, n){
		bool ok = true;
		int dist[n] = {};
		char linkcp[n][n];
		REP(i, 0, n) REP(j, 0, n) linkcp[i][j] = links[i][j];
		std::queue<P> que;
		
		que.emplace(st, 1);
		while(!que.empty()){
			auto [from, d] = que.front();
			que.pop();
			if(dist[from]!=0 and dist[from]!=d){
				ok = false;
				break;
			}
			dist[from] = d;
			REP(i, 0, n) if(linkcp[from][i]=='1') {
				que.emplace(i, d+1);
				linkcp[from][i] = linkcp[i][from] = '0';
			}
		}

		if(ok) ans = std::max(ans, *std::max_element(dist, dist+n));
	}
	
	printf("%d
", ans);
	return 0;
}
