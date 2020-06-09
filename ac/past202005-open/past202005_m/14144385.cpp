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
	int n, m;
	scanf("%d %d", &n, &m);
	std::vector<int> links[n];
	REP(i, 0, m){
		int a, b;
		scanf("%d %d", &a, &b);
		links[a-1].push_back(b-1);
		links[b-1].push_back(a-1);
	}

	int s, k;
	scanf("%d %d", &s, &k);
	V t(k);
	SCAN(t);
	t.push_back(s);
	k++;
	REP(i, 0, k) t[i]--;

	std::map<P, ll> mp;
	REP(x, 0, k){
		bool used[n] = {};
		std::queue<P> que;
		que.emplace(0l, t[x]);
		while(!que.empty()){
			auto [d, from] = que.front();
			que.pop();
			if(used[from]) continue;
			mp[P(t[x], from)] = d;
			used[from] = true;
			for(int to: links[from]){
				if(used[to]) continue;
				que.emplace(d+1, to);
			}
		}
		
	}
	
	ll dist[k][k];
	REP(i, 0, k) REP(j, 0, k) dist[i][j] = mp[P(t[i], t[j])];


	std::vector<V> dp(1<<k, V(k, 1e18));
	dp[1<<k-1][k-1] = 0;

	REP(i, 0, 1<<k) REP(I, 0, k){
		REP(J, 0, k) if(i|(1<<I)==i){
			dp[i|(1<<J)][J] = std::min(dp[i|(1<<J)][J], dp[i][I]+dist[I][J]);
		}
	}
	
	ll ans = 1e18;
	REP(i, 0, k) ans = std::min(ans, dp[(1<<k)-1][i]);
	printf("%ld
", ans);
	return 0;
}
