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
	int n, k;
	char s[110];
	scanf("%d %d %s", &n, &k, s);
	int last = -1;
	REP(i, 0, n) if(s[i]=='.') last = i;
	if(last<0){
		puts("0");
		return 0;
	}

	int ans = 0;
	for(int i=last-k+1; ; i--){
		if(i<=0){
			bool add = false;
			REP(j, 0, k) if(s[j]=='.') add = true;
			ans += add;
			break;
		}
		if(s[i+k-1]=='.'){
			REP(j, 0, k) s[i+j] = 'o';
			ans++;
		}
		ans++;
	}
	printf("%d
", ans);
	return 0;
}
