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
	int n, r;
	scanf("%d %d", &n, &r);
	char s[n+1];
	scanf("%s", s);
	int last = -1;
	REP(i, 0, n) if(s[i]=='.') last = i;
	if(last<0){
		puts("0");
		return 0;
	}

	int ans = 0;
	REP(i, 0, n){
		if(i) ans++;
		if(last>i+r-1 && s[i]=='o') continue;
		bool paint = false;
		REP(j, 0, r){
			if(i+j>=n) continue;
			if(s[i+j]=='.') paint = true;
			s[i+j] = 'o';
		}
		if(paint) ans++;
		if(i+r-1>=last) break;
	}
	printf("%d
", ans);
	return 0;
}
