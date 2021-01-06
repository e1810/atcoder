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
	int l[m], r[m], x[m];
	REP(i, 0, m) scanf("%d %d %d", &l[i], &r[i], &x[i]);

	int y[1+n] = {}, max = -1;
	REP(i, 0, 1<<n){
		int cnt = 0;
		memset(y, 0, sizeof(y));
		REP(j, 0, n){
			if((i>>j)&1){
				y[j+1]++;
				cnt++;
			}
			y[j+1] += y[j];
		}
		bool ok = true;
		REP(j, 0, m){
			if(y[r[j]]-y[l[j]-1]!=x[j]) ok = false;
		}
		if(ok) max = std::max(max, cnt);
	}
	printf("%d
", max);
	return 0;
}
