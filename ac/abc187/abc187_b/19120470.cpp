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
	int n;
	scanf("%d", &n);
	int x[n], y[n];
	REP(i, 0, n) scanf("%d %d", &x[i], &y[i]);

	int ans = 0;
	REP(i, 0, n) REP(j, i+1, n) {
		double d = (y[j]-y[i]) / (double)(x[j]-x[i]);
		if(-1<=d && d<=1) ans++;
	}
	printf("%d
", ans);
	return 0;
}
