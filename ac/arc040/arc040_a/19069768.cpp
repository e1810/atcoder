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
	int r = 0, b = 0;
	REP(i, 0, n){
		char s[n+1];
		scanf("%s", s);
		REP(j, 0, n){
			if(s[j]=='R') r++;
			if(s[j]=='B') b++;
		}
	}
	if(r>b) puts("TAKAHASHI");
	else if(r<b) puts("AOKI");
	else puts("DRAW");
	return 0;
}
