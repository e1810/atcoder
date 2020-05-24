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
	ll fact[100001];
	fact[0] = 1;
	REP(i, 1, 100001) fact[i] = fact[i-1] * i % MOD;

	int n, m;
	scanf("%d %d", &n, &m);
	if(n==m) printf("%ld
", fact[n] * fact[m] % MOD * 2 % MOD);
	else if(abs(n-m)==1) printf("%ld
", fact[n] * fact[m] % MOD);
	else puts("0");
	return 0;
}
