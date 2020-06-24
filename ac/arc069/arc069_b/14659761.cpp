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
	char s[n+1];
	scanf("%s", s);
	char sw[3] = "SW";

	REP(x, 0, 4){
		std::string ans = "  ";
		ans[0] = sw[x/2];
		ans[1] = sw[x%2];
		REP(i, 1, n-1){
			if(ans[i]=='S'){
				if(s[i]=='o') ans += ans[i-1];
				else{
					if(ans[i-1]=='S') ans += 'W';
					else ans += 'S';
				}
			}else{
				if(s[i]=='x') ans += ans[i-1];
				else{
					if(ans[i-1]=='S') ans += 'W';
					else ans += 'S';
				}
			}
		}
		if(ans[n-1]=='S'){
			if(s[n-1]=='o' and ans[0]!=ans[n-2]) continue;
			if(s[n-1]=='x' and ans[0]==ans[n-2]) continue;
		}else{
			if(s[n-1]=='o' and ans[0]==ans[n-2]) continue;
			if(s[n-1]=='x' and ans[0]!=ans[n-2]) continue;
		}
		if(ans[0]=='S'){
			if(s[0]=='o' and ans[1]!=ans[n-1]) continue;
			if(s[0]=='x' and ans[1]==ans[n-1]) continue;
		}else{
			if(s[0]=='o' and ans[1]==ans[n-1]) continue;
			if(s[0]=='x' and ans[1]!=ans[n-1]) continue;
		}
		std::cout << ans << '
';
		return 0;

	}	
	puts("-1");
	return 0;
}
