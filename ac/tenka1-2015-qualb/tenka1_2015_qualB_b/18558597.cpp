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

	bool dict = false;
	int nest = 0;
	for(char c: s){
		if(c=='{') nest++;
		if(c=='}') nest--;
		if(c==':' && nest==1){
			dict = true;
		}
	}
	if(dict || s=="{}") puts("dict");
	else puts("set");
	return 0;
}
