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
	char s[60] = "DiscoPresentsDiscoveryChannelProgrammingContest2016";
	int n;
	scanf("%d", &n);
	REP(i, 0, 51){
		if(i%n==0 && i>0) putchar('
');
		putchar(s[i]);
	}
	putchar('
');
	return 0;
}
