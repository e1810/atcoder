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
	bool used[26] = {};
	for(char c: s) used[c-'a'] = true;

	std::string ans = s;
	ans += char('a'-1);
	REP(i, 0, s.size()+1){
		char st = ans.back();
		ans.pop_back();
		used[st-'a'] = false;
		REP(j, st+1, 'z'+1) if(!used[j-'a']) {
			ans += j;
			std::cout << ans << '
';
			return 0;
		}
	}
	puts("-1");
	return 0;
}
