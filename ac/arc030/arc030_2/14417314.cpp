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

int n, x;
bool h[110], used[110] = {};

int dfs(int from, int cnt, std::vector<V>& links){
	int tmp = 0;
	used[from] = true;
	for(ll to: links[from]) if(!used[to]) {
		tmp += dfs(to, cnt, links);
	}
	if(tmp) return tmp+2;
	else if(h[from]) return 2;
	else return 0;
}

int main(){
	scanf("%d %d", &n, &x);
	REP(i, 0, n) scanf("%d", &h[i]);
	std::vector<V> links(n, V(0));
	REP(i, 0, n-1){
		int a, b;
		scanf("%d %d", &a, &b);
		links[a-1].push_back(b-1);
		links[b-1].push_back(a-1);
	}
	printf("%d
", std::max(0, dfs(x-1, 0, links)-2));
	return 0;
}
