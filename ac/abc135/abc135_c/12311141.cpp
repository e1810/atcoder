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
	V a(n+1), b(n);
	scan(a); scan(b);
	ll ans = 0;
	rep(i, 0, n){
		if(a[i]>b[i]){
			ans += b[i];
			a[i] -= b[i];
			b[i] = 0;
		}else{
			ans += a[i];
			b[i] -= a[i];
			a[i] = 0;
		}

		if(b[i]>a[i+1]){
			ans += a[i+1];
			b[i] -= a[i+1];
			a[i+1] = 0;
		}else{
			ans += b[i];
			a[i+1] -= b[i];
			b[i] = 0;
		}
	}
	printf("%ld
", ans);
	return 0;
}
