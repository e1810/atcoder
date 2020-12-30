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
	int w, h, n;
	scanf("%d %d %d", &w, &h, &n);
	bool p[h][w] = {};
	while(n--){
		int b, a, x;
		scanf("%d %d %d", &b, &a, &x);
		if(x==1) REP(i, 0, h) REP(j, 0, b) p[i][j] = true;
		if(x==2) REP(i, 0, h) REP(j, b, w) p[i][j] = true;
		if(x==3) REP(i, 0, a) REP(j, 0, w) p[i][j] = true;
		if(x==4) REP(i, a, h) REP(j, 0, w) p[i][j] = true;
	}

	int ans = 0;
	REP(i, 0, h) REP(j, 0, w) ans += 1^p[i][j];
	printf("%d
", ans);
	return 0;
}
