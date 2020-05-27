#pragma target("avx")
#include<bits/stdc++.h>
using ll = int_fast64_t;
using P = std::pair<ll,ll>;
using V = std::vector<ll>;
template<typename T> using pq = std::priority_queue<T>;
template<typename T> using rpq = std::priority_queue<T, std::vector<T>, std::greater<T>>;

#define REP(i,b,e) for(ll i=b; i<e; i++)
#define ALL(vec) vec.begin(),vec.end()
#define PRINT(vec) for(auto &i:vec)fprintf(stderr,"%ld ",i);puts("");
#define SCAN(vec) for(auto &i:vec)scanf("%ld",&i)
#define fi first
#define se second

const int MOD = 1e9+7;
const ll INF = 1e18;
int dx[] = {0, 1, 0, -1, 1, 1, -1, -1}, dy[] = {1, 0, -1, 0, 1, -1, -1, 1};

int main(){
	int n, d;
	scanf("%d %d", &n, &d);
	std::vector<P> ab(n);
	REP(i, 0, n) scanf("%ld %ld", &ab[i].se, &ab[i].fi);
	std::sort(ALL(ab), [](P x, P y){return x.se<y.se;});
	
	ll ans = 0,  pos = 0;
	pq<P> que;
	REP(i, 0, d){
		while(pos<n and ab[pos].se<=i+1){
			que.push(ab[pos]);
			pos++;
		}
		if(que.empty()) continue;
		ans += que.top().fi;
		que.pop();
	}
	printf("%ld
", ans);
	return 0;
}
