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
	int n, x;
	scanf("%d %d", &n, &x);
	int a[n];
	REP(i, 0, n) scanf("%d", &a[i]);

	ll ans = 0;
	if(a[0]>x){
		ans += a[0] - x;
		a[0] = x;
	}
	REP(i, 1, n){
		if(a[i-1]+a[i]>x){
			ans += a[i-1]+a[i] - x;
			a[i] = x - a[i-1];
		}
	}
	printf("%ld
", ans);
	return 0;
}
