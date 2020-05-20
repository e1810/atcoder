#pragma target("avx")
#include<bits/stdc++.h>
using ll = int_fast64_t;
using P = std::pair<ll,ll>;
using V = std::vector<ll>;
template<typename T> using pq = std::priority_queue<T>;
template<typename T> using rpq = std::priority_queue<T, std::vector<T>, std::greater<T>>;

#define REP(i,b,e) for(ll i=b; i<e; i++)
#define ALL(vec) vec.begin(),vec.end()
#define PRINT(vec) printf("[ ");for(auto &i:vec)printf("%ld ",i);puts("]");
#define SCAN(vec) for(auto &i:vec)scanf("%ld",&i)
#define fi first
#define se second

const int MOD = 1e9+7;
const ll INF = 1e18;
int dx[] = {0, 1, 0, -1, 1, 1, -1, -1}, dy[] = {1, 0, -1, 0, 1, -1, -1, 1};

std::string s;
int i = 0;

std::string dfs(){
	std::string ret;
	i++;
	while(s[i]!=')'){
		if(s[i]=='(') ret += dfs();
		else ret += s[i];
		i++;
	}
	std::string tmp(ret);
	std::reverse(ALL(tmp));
	ret += tmp;
	return ret;
}


int main(){
	std::cin >> s;
	
	std::string ans;
	while(i<s.size()){
		if(s[i]=='(') ans += dfs();
		else ans += s[i];
		i++;
	}
	std::cout << ans << '
';
	return 0;
}
