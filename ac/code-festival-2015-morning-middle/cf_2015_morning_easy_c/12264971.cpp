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
	ll n, k, m, r;
	scanf("%ld %ld %ld %ld", &n, &k, &m, &r);
	ll a[n+1];
	a[0] = 0;
	a[n] = 0;
	rep(i, 1, n) scanf("%ld", &a[i]);
	std::sort(a+1, a+n, std::greater<ll>());
	rep(i, 0, n) a[i+1] += a[i];

	if(a[k]>=k*r) puts("0");
	else{
		ll need = k*r-a[k-1];
		if(need>m) puts("-1");
		else printf("%ld
", need);
	}

	return 0;
}
