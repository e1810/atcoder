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
	int n;
	scanf("%d", &n);
	char s[n+1];
	scanf("%s", s);
	int w[n+1], e[n+1];
	w[0] = e[0] = 0;
	rep(i, 0, n){
		w[i+1] = w[i] + (s[i]=='W');
		e[i+1] = e[i] + (s[i]=='E');
	}
	int ans = n;
	rep(i, 1, n+1){
		ans = std::min(ans, w[i-1]+e[n]-e[i]);
	}
	printf("%d
", ans);
	return 0;
}
