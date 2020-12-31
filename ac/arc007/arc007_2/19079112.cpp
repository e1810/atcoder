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
	int d[n+1];
	REP(i, 0, n+1) d[i] = i;
	while(m--){
		int t;
		scanf("%d", &t);
		REP(i, 1, n+1) if(d[i]==t) {
			std::swap(d[0], d[i]);
		}
	}
	REP(i, 1, n+1) printf("%d
", d[i]);
	return 0;
}
