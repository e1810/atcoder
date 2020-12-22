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
	std::string s, t;
	std::cin >> s >> t;
	int n = s.size(), m = t.size();

	int dp[n+1][m+1] = {};
	REP(i, 1, n+1) REP(j, 1, m+1) {
		if(s[i-1]==t[j-1]){
			dp[i][j] = std::max(dp[i][j], dp[i-1][j-1] + 1);
		}
		dp[i][j] = std::max(dp[i][j], dp[i-1][j]);
		dp[i][j] = std::max(dp[i][j], dp[i][j-1]);
	}

	std::string ans;
	int len = dp[n][m], i = n-1, j = m-1;
	while(len){
		if(s[i]==t[j]){
			ans += s[i];
			i--, j--;
			len--;
		}else if(dp[i+1][j+1]==dp[i][j+1]){
			i--;
		}else j--;
	}
	std::reverse(ans.begin(), ans.end());
	std::cout << ans << '
';
	return 0;
}
