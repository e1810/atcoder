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
	ll n, m;
	scanf("%ld %ld", &n, &m);
	V links[n];
	REP(i, 0, m){
		ll a, b;
		scanf("%ld %ld", &a, &b);
		links[a-1].push_back(b-1);
		links[b-1].push_back(a-1);
	}

	V ans(n, -1);
	std::queue<P> que;
	que.emplace(-1, 0);
	while(!que.empty()){
		auto [from, now] = que.front();
		que.pop();
		if(ans[now]>=0) continue;
		ans[now] = from + 1;
		for(ll to: links[now]){
			if(ans[to]>=0) continue;
			que.emplace(now, to);
		}
	}
	puts("Yes");
	REP(i, 1, n) printf("%ld
", ans[i]);
	return 0;
}
