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
	x *= 100;
	int y = 0, ans = -1;
	REP(i, 0, n){
		int v, p;
		scanf("%d %d", &v, &p);
		y += v * p;
		if(y>x){
			ans = i + 1;
			break;
		}
	}
	printf("%d
", ans);
	return 0;
}
