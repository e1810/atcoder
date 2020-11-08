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
	ll n;
	scanf("%ld", &n);
	ll a[n+1], b[n+1];
	a[0] = b[0] = 0;
	REP(i, 1, n+1){
		scanf("%ld", &a[i]);
		b[i] = a[i];
	}

	REP(i, 0, n) a[i+1] += a[i];
	REP(i, 0, n) b[i+1] += b[i];
	
	ll ans = 0, max = 0;
	REP(i, 0, n){
		max = std::max(max, b[i]);
		ans = std::max(ans, a[i] + max);
		a[i+1] += a[i];
	}
	printf("%ld
", std::max(ans, a[n]));
	return 0;
}
