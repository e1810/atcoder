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
	int n, sl = 0;
	scanf("%d", &n);
	getchar();
	char s[1001], c;
	while((c=getchar())!='
') s[sl++] = c;

	int path[1001][1001] = {};
	REP(w, 0, n){
		char t[1001];
		int tl = 0;
		while((c=getchar())!='
') t[tl++] = c;

		REP(i, 0, sl-tl+1){
			bool match = true;
			REP(j, 0, tl){
				if(s[i+j]!=t[j]){
					match = false;
					break;
				}
			}
			if(match) path[i][i+tl]++;
		}
	}

	ll dp[sl+1] = {};
	dp[0] = 1;
	REP(i, 1, sl+1){
		REP(j, 0, sl+1){
			dp[i] += dp[j] * path[j][i] % MOD;
			dp[i] %= MOD;
		}
	}
	printf("%ld
", dp[sl]);
	return 0;
}
