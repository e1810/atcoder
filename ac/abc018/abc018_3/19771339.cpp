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
	int r, c, k;
	scanf("%d %d %d", &r, &c, &k);
	char fie[r][c];
	REP(i, 0, r) scanf("%s", fie[i]);
	int wa[1+r][1+c] = {};
	REP(i, 0, r) REP(j, 0, c) wa[i+1][j+1] = (fie[i][j]=='x');
	REP(i, 0, r+1) REP(j, 0, c) wa[i][j+1] += wa[i][j];

	

	int ans = 0;
	REP(i, 0, r) REP(j, 0, c) {
		if(k-1<=i && i<=r-k && k-1<=j && j<=c-k){
			bool ok = true;
			REP(l, -k+1, k){
				ok &= (wa[i+1+l][j+1+k-1-abs(l)] - wa[i+1+l][j+1-k+1+abs(l)-1] == 0);
			}
			if(ok) ans++;
		}
	}
	printf("%d
", ans);
	return 0;
}
