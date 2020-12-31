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
	int cnt[n], red[n] = {1};
	REP(i, 0, n) cnt[i] = 1;
	REP(i, 0, m){
		int x, y;
		scanf("%d %d", &x, &y);
		x--, y--;
		if(red[x]) red[y] = true;
		cnt[x]--, cnt[y]++;
		if(cnt[x]==0) red[x] = false;
	}
	int ans = 0;
	REP(i, 0, n) ans += red[i];
	printf("%d
", ans);
	return 0;
}
