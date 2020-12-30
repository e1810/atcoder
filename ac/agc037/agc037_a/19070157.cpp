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

	int ans = 0;
	std::string prev = "", tmp = "";
	REP(i, 0, s.size()){
		tmp += s[i];
		if(prev!=tmp){
			ans++;
			prev = tmp;
			tmp = "";
		}
	}
	printf("%d
", ans);
	return 0;
}
