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
	int n, t;
	scanf("%d %d", &n, &t);
	int sum = 0, dif[n];
	REP(i, 0, n){
		int a, b;
		scanf("%d %d", &a, &b);
		sum += a;
		dif[i] = a - b;
	}
	std::sort(dif, dif+n, std::greater<int>());
	
	int ans = 0;
	REP(i, 0, n){
		if(sum<=t) break;
		sum -= dif[i];
		ans++;
	}
	if(sum>t) puts("-1");
	else printf("%d
", ans);
	return 0;
}
