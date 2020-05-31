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
	ll n;
	scanf("%ld", &n);
	
	ll m = n;
	V primefactor;
	for(ll i=2; i*i<=m; i++){
		if(m%i==0) primefactor.push_back(i);
		while(m%i==0) m /= i;
	}
	if(m>1) primefactor.push_back(m);
	
	V zs;
	for(ll p: primefactor){
		for(ll i=p; i<=n; i*=p){
			if(n%i==0) zs.push_back(i);
		}
	}
	std::sort(ALL(zs));

	ll ans = 0;
	for(ll z: zs){
		if(n%z==0){
			n /= z;
			ans++;
		}
	}
	printf("%ld
", ans);
	return 0;
}
