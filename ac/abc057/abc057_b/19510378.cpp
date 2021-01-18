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
	int n, m;
	scanf("%d %d", &n, &m);

	int a[n], b[n], c[m], d[m];
	REP(i, 0, n) scanf("%d %d", &a[i], &b[i]);
	REP(i, 0, m) scanf("%d %d", &c[i], &d[i]);

	REP(i, 0, n){
		int idx = 0;
		REP(j, 0, m){
			int now = abs(a[i]-c[idx]) + abs(b[i]-d[idx]);
			int nx = abs(a[i]-c[j]) + abs(b[i]-d[j]);
			if(now>nx) idx = j;
		}
		printf("%d
", idx+1);
	}
	return 0;
}
