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
	ll a[n];
	REP(i, 0, n) scanf("%ld", &a[i]);

	bool p = true;
	std::map<ll,int> mp;
	REP(i, 0, n){
		ll x = a[i];
		for(ll i=2; i*i<=x; i++){
			if(x%i==0){
				if(mp[i]) p = false;
				else mp[i]++;
			}
			while(x%i==0) x/=i;
		}
		if(x!=1){
			if(mp[x]) p = false;
			else mp[x]++;
		}
		if(!p) break;
	}

	if(p){
		puts("pairwise coprime");
		return 0;
	}
	
	ll g = 0;
	REP(i, 0, n) g = std::gcd(g, a[i]);
	if(g==1) puts("setwise coprime");
	else puts("not coprime");
	return 0;
}
