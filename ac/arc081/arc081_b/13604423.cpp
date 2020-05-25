#pragma target("avx")
#pragma optimize("O3")
#include<bits/stdc++.h>
using ll = int_fast64_t;
using P = std::pair<ll,ll>;
using PP = std::pair<ll,P>;
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

int main(){
	int n;
	scanf("%d", &n);
	char s[2][n+1];
	scanf("%s %s", s[0], s[1]);
	
	ll ans = (s[0][0]==s[1][0])? 3:6;
	REP(i, 0, n-1){
		int bit = (s[0][i]==s[1][i])*2 + (s[0][i+1]==s[1][i+1]);
		if(bit==0){
			if(s[0][i]!=s[0][i+1] or s[1][i]!=s[1][i+1]) ans = ans * 3 % MOD;
		}
		if(bit==2) ans = ans * 2 % MOD;
		if(bit==3) ans = ans * 2 % MOD;
	}
	printf("%ld
", ans);
	return 0;
}
