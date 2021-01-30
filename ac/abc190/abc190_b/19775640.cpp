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
	int n, s, d;
	scanf("%d %d %d", &n, &s, &d);
	bool ok = false;
	REP(i, 0, n){
		int x, y;
		scanf("%d %d", &x, &y);
		if(x<s and y>d) ok = true;
	}
	if(ok) puts("Yes");
	else puts("No");
	return 0;
}
