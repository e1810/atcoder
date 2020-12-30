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
	char ans[4][8] = {"x x x x", " x x x ", "  x x  ", "   x   "};
	int x[] = {0, 3, 2, 2, 1, 1, 1, 0, 0, 0};
	int y[] = {6, 3, 2, 4, 1, 3, 5, 0, 2, 4};

	int n, m;
	scanf("%d %d", &n, &m);
	REP(i, 0, n){
		int p;
		scanf("%d", &p);
		ans[x[p]][y[p]] = '.';
	}
	REP(i, 0, m){
		int p;
		scanf("%d", &p);
		ans[x[p]][y[p]] = 'o';
	}
		
	REP(i, 0, 4) printf("%s
", ans[i]);
	return 0;
}
