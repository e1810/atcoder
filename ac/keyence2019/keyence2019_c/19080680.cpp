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
	int a[n], b[n];
	REP(i, 0, n) scanf("%d", &a[i]);
	REP(i, 0, n) scanf("%d", &b[i]);

	int dif[n];
	REP(i, 0, n) dif[i] = a[i] - b[i];
	std::sort(dif, dif+n);

	int ans = 0;
	ll ne = 0;
	REP(i, 0, n){
		if(dif[i]>=0) break;
		ne -= dif[i];
		ans++;
	}

	std::reverse(dif, dif+n);
	REP(i, 0, n){
		if(dif[i]<=0) break;
		if(ne<=0) break;
		ne -= dif[i];
		ans++;
	}
	
	if(ne>0) puts("-1");
	else printf("%d
", ans);
	return 0;
}
