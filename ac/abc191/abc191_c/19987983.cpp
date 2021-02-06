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
	int h, w;
	scanf("%d %d", &h, &w);
	char fie[h][w+1];
	REP(i, 0, h) scanf("%s", fie[i]);

	int ans = 0;
	REP(i, 0, h) REP(j, 0, w) if(fie[i][j]=='#') {
		bool v[4] = {};
		if(fie[i-1][j]=='#') v[0] = v[1] = true;
		if(fie[i+1][j]=='#') v[2] = v[3] = true;
		if(fie[i][j-1]=='#') v[0] = v[2] = true;
		if(fie[i][j+1]=='#') v[1] = v[3] = true;
		REP(k, 0, 4) ans += !v[k];
	}

	REP(i, 0, h) REP(j, 0, w) if(fie[i][j]=='.') {
		bool v[4] = {};
		if(i==0 or fie[i-1][j]=='.') v[0] = v[1] = true;
		if(i==h-1 or fie[i+1][j]=='.') v[2] = v[3] = true;
		if(j==0 or fie[i][j-1]=='.') v[0] = v[2] = true;
		if(j==w-1 or fie[i][j+1]=='.') v[1] = v[3] = true;
		REP(k, 0, 4) ans += !v[k];
	}



	printf("%d
", ans);
	return 0;
}
