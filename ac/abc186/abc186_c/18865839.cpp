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

	int ans = 0;
	REP(i, 1, n+1){
		bool ok = true;
		int x = i;
		while(x){
			if(x%10==7) ok = false;
			x /= 10;
		}
		x = i;
		while(x){
			if(x%8==7) ok = false;
			x /= 8;
		}
		if(ok) ans++;
	}
	printf("%d
", ans);
	return 0;
}
