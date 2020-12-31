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
	int a[m];
	REP(i, 0, m) scanf("%d", &a[i]);
	std::sort(a, a+m);

	int d[m-1];
	REP(i, 0, m-1) d[i] = a[i+1] - a[i];
	std::sort(d, d+m-1);
	int ans = 0;
	REP(i, 0, m-1-std::min(m-1, n-1)) ans += d[i];
	printf("%d
", ans);
	return 0;
}
