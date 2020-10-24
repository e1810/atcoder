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

	if(n==1 && m==0){
		puts("1 2");
		return 0;
	}
	if(m<0 || m+2>n){
		puts("-1");
		return 0;
	}
	
	puts("2 3");
	puts("1 500000000");
	REP(i, 0, m) printf("%d %d
", 4+i*2, 5+i*2);
	REP(i, 0, n-m-2) printf("%d %d
", 500000001+i*2, 500000002+i*2);
	return 0;
}
