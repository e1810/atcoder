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
	ll n, k;
	scanf("%ld %ld", &n, &k);
	k = std::min(k, 41l);
	std::vector<V> a(k+1, V(n+1, 0));
	REP(i, 0, n) scanf("%ld", &a[0][i]);
	for(int i=n; i>0; i--) a[0][i] -= a[0][i-1];
	
	REP(i, 0, k){
		REP(j, 0, n){
			a[i+1][std::max(0l, j-a[i][j])]++;
			a[i+1][std::min(n, j+a[i][j]+1)]--;
			a[i][j+1] += a[i][j];
		}
	}
	REP(i, 0, n){
		printf("%ld ", a[k][i]);
		a[k][i+1] += a[k][i];
	}
	puts("");
	return 0;
}
