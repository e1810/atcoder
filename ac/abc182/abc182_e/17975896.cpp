#include<bits/stdc++.h>
using ll = int_fast64_t;
using P = std::pair<ll,ll>;
using PP = std::pair<ll,P>;

#define REP(i,b,e) for(int i=b; i<e; i++)
#define PRINT(vec) {printf("[ ");for(auto &i:vec)printf("%ld ",i);puts("]");}
#define fi first
#define se second

const int MOD = 1e9+7;
int dx[] = {0, 1, 0, -1, 1, 1, -1, -1}, dy[] = {1, 0, -1, 0, 1, -1, -1, 1};

int main(){
	int h, w, n, m;
	scanf("%d %d %d %d", &h, &w, &n, &m);
	char fie[h][w] = {};
	REP(i, 0, n){
		int x, y;
		scanf("%d %d", &x, &y);
		fie[x-1][y-1] = 2;
	}
	REP(i, 0, m){
		int x, y;
		scanf("%d %d", &x, &y);
		fie[x-1][y-1] = 1;
	}

	bool nfie[h][w] = {};
	REP(i, 0, h){
		bool sh = false;
		REP(j, 0, w){
			if(fie[i][j]==2) sh = true;
			else if(fie[i][j]==1) sh = false;
			if(sh) nfie[i][j] = true;
		}
		sh = false;
		for(int j=w-1; j>=0; j--){
			if(fie[i][j]==2) sh = true;
			else if(fie[i][j]==1) sh = false;
			if(sh) nfie[i][j] = true;
		}
	}
	REP(j, 0, w){
		bool sh = false;
		REP(i, 0, h){
			if(fie[i][j]==2) sh = true;
			else if(fie[i][j]==1) sh = false;
			if(sh) nfie[i][j] = true;
		}
		sh = false;
		for(int i=h-1; i>=0; i--){
			if(fie[i][j]==2) sh = true;
			else if(fie[i][j]==1) sh = false;
			if(sh) nfie[i][j] = true;
		}
	}

	/*REP(i, 0, h){
		REP(j, 0, w) printf("%d", nfie[i][j]); puts("");
	}*/
	
	int ans = 0;
	REP(i, 0, h) REP(j, 0, w) ans += nfie[i][j];
	printf("%d
", ans);
	return 0;
}
