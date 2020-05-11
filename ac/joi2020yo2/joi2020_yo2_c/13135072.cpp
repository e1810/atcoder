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

ll n;
bool used[1000001];
bool canbe[1000001];

bool dfs(ll x) {
	if(used[x]) return canbe[x];
	used[x] = true;
	ll next = x, tmp = x;
	while(tmp) {
		next += tmp%10;
		tmp /= 10;
	}
	if(next>n) return canbe[x] = false;
	if(next==n) return canbe[x] = true;
	return canbe[x] = dfs(next);
}

int main(){
	scanf("%ld", &n);
	rep(i, 1, n+1) dfs(i);
	ll ans = 1;
	rep(i, 1, n+1) ans += canbe[i];
	printf("%ld
", ans);
	return 0;
}
