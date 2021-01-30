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
	int a[m], b[m];
	REP(i, 0, m) scanf("%d %d", &a[i], &b[i]);

	int k;
	scanf("%d", &k);
	int c[k], d[k];
	REP(i, 0, k) scanf("%d %d", &c[i], &d[i]);

	int ans = 0;
	REP(i, 0, 1<<k){
		bool p[n] = {};
		REP(j, 0, k){
			if((i>>j)&1) p[c[j]-1] = true;
			else p[d[j]-1] = true;
		}
		int cnt = 0;
		REP(j, 0, m){
			if(p[a[j]-1] && p[b[j]-1]) cnt++;
		}
		ans = std::max(ans, cnt);
	}
	printf("%d
", ans);
	return 0;
}
