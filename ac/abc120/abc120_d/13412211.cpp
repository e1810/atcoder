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

struct unionFind {
	std::vector<ll> data;
	unionFind(ll x): data(x, -1) {};

	ll find(ll x){
		if(data[x]<0) return x;
		else return data[x] = find(data[x]);
	}

	ll unite(ll x, ll y){
		x = find(x);
		y = find(y);
		if(x==y) return 0;
		ll ret = data[x] * data[y];
		data[y] += data[x];
		data[x] = y;
		return ret;
	}

	ll size(ll x){
		return -data[find(x)];
	}
};

int main(){
	ll n, m;
	scanf("%ld %ld", &n, &m);
	std::vector<P> ab(m);
	REP(i, 0, m) scanf("%ld %ld", &ab[i].fi, &ab[i].se);
	
	unionFind tree(n);
	ll cnt = (n * n - n) / 2;
	std::vector<ll> ans(m);
	for(ll i=m-1; i>=0; i--){
		ans[i] = cnt;
		cnt -= tree.unite(ab[i].fi-1, ab[i].se-1);
	}

	REP(i, 0, m) printf("%ld
", (ans[i]));
	return 0;
}
