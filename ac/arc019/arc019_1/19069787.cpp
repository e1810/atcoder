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
	for(char &c: s){
		if(c=='O') c = '0';
		if(c=='D') c = '0';
		if(c=='I') c = '1';
		if(c=='Z') c = '2';
		if(c=='S') c = '5';
		if(c=='B') c = '8';
	}
	std::cout << s << '
';
	return 0;
}
