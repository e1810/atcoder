#include<bits/stdc++.h>
#define REP(i,b,e) for(int i=b; i<e; i++)

int main(){
	int h, w;
	scanf("%d %d", &h, &w);
	bool fie[h][w];
	REP(i, 0, h) REP(j, 0, w) {
		int x;
		scanf("%d", &x);
		fie[i][j] = x;
	}

	int ans = 0;
	REP(i, 0, 1<<h){
		int tmp = 0;
		REP(j, 0, w){
			int cnt = 0;
			REP(k, 0, h){
				if((i>>k)&1) cnt += fie[k][j];
				else cnt += fie[k][j]^1;
			}
			tmp += std::max(cnt, h-cnt);
		}
		ans = std::max(ans, tmp);
	}
	printf("%d\n", ans);
	return 0;
}

	
