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
	int a[m+2];
	REP(i, 0, m) scanf("%d", &a[i]);
	a[m] = 0, a[m+1] = n+1;
	std::sort(a, a+m+2);
	int min = n;
	REP(i, 1, m+2) if(a[i]-a[i-1]!=1) {
		min = std::min(min, a[i]-a[i-1]-1);
	}
	
	int ans = 0;
	REP(i, 1, m+2){
		ans += (a[i]-a[i-1]-1+min-1) / min;
	}
	printf("%d
", ans);
	return 0;
}
