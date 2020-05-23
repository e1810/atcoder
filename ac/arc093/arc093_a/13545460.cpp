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
	int n;
	scanf("%d", &n);
	V a(n+2);
	REP(i, 1, n+1) scanf("%ld", &a[i]);
	a[0] = a[n+1] = 0;

	V l(n+2), r(n+2);
	REP(i, 0, n+1){
		l[i+1] = l[i] + labs(a[i+1] - a[i]);
		r[n-i] = r[n-i+1] + labs(a[n-i+1]-a[n-i]);
	}

	REP(i, 1, n+1){
		ll mid = labs(a[i+1] - a[i-1]);
		printf("%ld
", l[i-1] + mid + r[i+1]);
	}
	return 0;
}
