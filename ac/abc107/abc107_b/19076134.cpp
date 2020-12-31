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
	int h, w;
	scanf("%d %d", &h, &w);

	std::vector<std::string> ans;
	REP(i, 0, h){
		std::string s;
		std::cin >> s;
		bool white = true;
		REP(j, 0, w) if(s[j]=='#') white = false;
		if(!white) ans.push_back(s);
	}

	bool wcol[w];
	memset(wcol, 1, w);
	REP(i, 0, w){
		REP(j, 0, ans.size()) if(ans[j][i]=='#') wcol[i] = false;
	}

	REP(i, 0, ans.size()){
		REP(j, 0, w) if(!wcol[j]) putchar(ans[i][j]);
		putchar('
');
	}
	return 0;
}
