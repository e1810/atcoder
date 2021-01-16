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
	int n, k;
	scanf("%d %d", &n, &k);
	int a[n];
	REP(i, 0, n) scanf("%d", &a[i]);
	ll cnt[n] = {};
	REP(i, 0, n) cnt[a[i]]++;

	ll ans = 0, ct = k;
	REP(i, 0, n){
		ans += std::max(0l, ct-cnt[i]) * i;
		ct = std::min(ct, cnt[i]);
	}
	printf("%ld
", ans);
	return 0;
}
