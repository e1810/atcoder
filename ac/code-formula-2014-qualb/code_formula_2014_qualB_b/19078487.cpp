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
	int ev=0, od=0;
	std::reverse(s.begin(), s.end());
	REP(i, 0, s.size()){
		if(i&1) ev += s[i] - '0';
		else od += s[i] - '0';
	}
	printf("%d %d
", ev, od);
	return 0;
}
