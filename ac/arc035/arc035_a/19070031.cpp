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
	std::string s;
	std::cin >> s;

	bool flag = true;
	REP(i, 0, s.size()/2){
		if(s[i]=='*' or s[s.size()-i-1]=='*') continue;
		if(s[i]!=s[s.size()-i-1]) flag = false;
	}
	if(flag) puts("YES");
	else puts("NO");
	return 0;
}
