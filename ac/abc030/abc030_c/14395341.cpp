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
	ll n, m, x, y;
	scanf("%ld %ld %ld %ld", &n, &m, &x, &y);
	V a(n), b(m);
	SCAN(a);
	SCAN(b);

	ll now=0, posa=0, posb=0, ans=0;
	while(posa!=n and posb!=m){
		while(posa<n and a[posa]<now) posa++;
		if(posa==n) break;
		now = a[posa] + x;
		while(posb<m and b[posb]<now) posb++;
		if(posb==m) break;
		now = b[posb] + y;
		ans++;
	}
	printf("%ld
", ans);
	return 0;
}
