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

	int sum = 0;
	for(char c: s) sum += c - '0';
	std::string ans;
	while(sum){
		if(sum>=10){
			ans += '9';
			sum -= 9;
		}else{
			ans += (sum%10) + '0';
			break;
		}
	}
	std::reverse(ans.begin(), ans.end());

	if(ans!=s) std::cout << ans << '
';
	else{
		ll add = 9;
		for(int i=s.size()-2; i>=0; i--){
			if(ans[i]=='9') add *= 10;
			else break;
		}
		std::cout << stol(ans) + add << '
';
	}
	return 0;
}
