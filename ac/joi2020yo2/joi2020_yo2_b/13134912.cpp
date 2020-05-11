#pragma target("avx")
#include<bits/stdc++.h>
using ll = int_fast64_t;
using P = std::pair<ll,ll>;
using V = std::vector<ll>;
template<typename T> using pq = std::priority_queue<T>;
template<typename T> using rpq = std::priority_queue<T, std::vector<T>, std::greater<T>>;

#define rep(i,b,e) for(ll i=b; i<e; i++)
#define rrep(i,b,e) for(ll i=b; i>e; i--)
#define be(vec) vec.begin(),vec.end()
#define print(vec) printf("[ ");for(auto &i:vec)printf("%ld ",i);puts("]");
#define scan(vec) for(auto &i:vec)scanf("%ld",&i)
#define fi first
#define se second

const int MOD = 1e9+7;
const ll INF = 1e18;
int dx[] = {0, 1, 0, -1, 1, 1, -1, -1}, dy[] = {1, 0, -1, 0, 1, -1, -1, 1};

int main(){
	int n;
	scanf("%d", &n);
	std::vector<P> at(n);
	rep(i, 0, n) scanf("%ld %ld", &at[i].fi, &at[i].se);
	std::sort(be(at), [](P x, P y){return x.fi<y.fi;});
	bool taken[n] = {};
	rep(i, 0, n){
		if(at[i].fi>=at[i].se) taken[i] = true;
	}
	ll now = 0, prev = at[n-1].fi * 2;
	rrep(i, n-1, -1) if(!taken[i]) {
		now = std::max(now + prev - at[i].fi, at[i].se);
		prev = at[i].fi;
	}
	printf("%ld
", now+prev);
	return 0;
}
