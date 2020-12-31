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
	int n = s.size();

	int ans[n+1] = {};
	REP(i, 0, n){
		if(s[i]=='<') ans[i+1] = std::max(ans[i+1], ans[i] + 1);
	}
	for(int i=n-1; i>=0; i--){
		if(s[i]=='>') ans[i] = std::max(ans[i], ans[i+1] + 1);
	}
	
	ll sum = 0;
	REP(i, 0, n+1){
		sum += ans[i];
	}
	printf("%ld
", sum);
	return 0;
}
