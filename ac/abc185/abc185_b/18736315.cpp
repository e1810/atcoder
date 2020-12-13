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
	int n, m, t;
	scanf("%d %d %d", &n, &m, &t);
	bool ok = true;
	int now = 0, bat = n;
	while(m--){
		int a, b;
		scanf("%d %d", &a, &b);
		bat -= a - now;
		if(bat<=0) ok = false;
		bat += b - a;
		bat = std::min(bat, n);
		now = b;
	}
	if(ok){
		if(bat>t-now) puts("Yes");
		else puts("No");
	}else puts("No");
	return 0;
}
