
#pragma target("avx")
#include<bits/stdc++.h>
using ll = int_fast64_t;
using P = std::pair<ll,ll>;
using V = std::vector<ll>;
template<typename T> using pq = std::priority_queue<T>;
template<typename T> using rpq = std::priority_queue<T, std::vector<T>, std::greater<T>>;

#define rep(i,b,e) for(ll i=b; i<e; i++)
#define be(vec) vec.begin(),vec.end()
#define print(vec) printf("[ ");for(auto &i:vec)printf("%ld ",i);puts("]");
#define scan(vec) for(auto &i:vec)scanf("%ld",&i)
#define fi first
#define se second

const int MOD = 1e9+7;
const ll INF = 1e18;
int dx[] = {0, 1, 0, -1, 1, 1, -1, -1}, dy[] = {1, 0, -1, 0, 1, -1, -1, 1};

int main(){
	ll n, m, l, p, q, r;
	scanf("%ld %ld %ld %ld %ld %ld", &n, &m, &l, &p, &q, &r);
	printf("%ld
", std::max({
		(n/p) * (m/q) * (l/r),
		(n/p) * (m/r) * (l/q),
		(n/q) * (m/p) * (l/r),
		(n/q) * (m/r) * (l/p),
		(n/r) * (m/p) * (l/q),
		(n/r) * (m/q) * (l/p)
	}));
	return 0;
}
