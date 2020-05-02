
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
	int n, m;
	scanf("%d %d", &n, &m);
	V a(n, 1), red(n, 0);
	red[0] = 1;
	rep(i, 0, m){
		int x, y;
		scanf("%d %d", &x, &y);
		a[x-1]--;
		a[y-1]++;
		if(red[x-1]) red[y-1] = 1;
		if(a[x-1]==0) red[x-1] = 0;
	}
	ll ans = 0;
	for(ll i: red) ans += i;
	printf("%ld
", ans);
	return 0;
}
