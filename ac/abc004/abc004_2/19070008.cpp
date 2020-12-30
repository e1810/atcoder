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
	char s[4][4];
	REP(i, 0, 4) REP(j, 0, 4) {
		s[i][j] = getchar();
		getchar();
	}

	REP(i, 0, 4){
		REP(j, 0, 4){
			if(j) putchar(' ');
			putchar(s[3-i][3-j]);
		}
		putchar('
');
	}
	return 0;
}
