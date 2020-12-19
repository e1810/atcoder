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
	int a[h][w], min = 100;
	REP(i, 0, h) REP(j, 0, w) {
		scanf("%d", &a[i][j]);
		min = std::min(min, a[i][j]);
	}

	int ans = 0;
	REP(i, 0, h) REP(j, 0, w) {
		ans += a[i][j] - min;
	}
	printf("%d
", ans);
	return 0;
}
