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

ll inv(ll x){
	ll ret = 1, p = MOD;
	while(p){
		if(p&1) ret = ret * x % MOD;
		x = x * x % MOD;
		p >>= 1;
	}
	return ret;
}

int main(){
	int n, k;
	scanf("%d %d", &n, &k);
	V a(n);
	SCAN(a);
	
	
	if(n==k){
		ll ans = 1;
		REP(i, 0, n) ans = ans * a[i] % MOD;
		printf("%ld
", (ans+MOD)%MOD);
		return 0;
	}

	V pl, mi;
	REP(i, 0, n){
		if(a[i]>=0) pl.push_back(a[i]);
		else mi.push_back(a[i]);
	}
	std::sort(ALL(pl));
	std::sort(ALL(mi), std::greater<ll>());

	if(pl.size()==0){
		ll ans = 1;
		if(k%2) REP(i, 0, k) ans = ans * mi[i] % MOD;
		else REP(i, 0, k) ans = ans * mi[n-i-1] % MOD;
		printf("%ld
", (ans+MOD)%MOD);
		return 0;
	}

	ll ans = 1;
	while(k){
		ll x=pl.size(), y=mi.size();
		if(k>=2){
			ll pl2 = pl[x-2] * pl[x-1], mi2 = -1;
			if(y>=2) mi2 = mi[y-2] * mi[y-1];
			
			if(x>=2 and y<2){
				ans = ans * pl[x-1] % MOD;
				pl.pop_back();
				k -= 1;
				continue;
			}else if(x<2 and y>=2){
				ans *= mi[y-2] * mi[y-1] % MOD;
				ans %= MOD;
				mi.pop_back();
				mi.pop_back();
				k -= 2;
				continue;
			}

			if(pl2>mi2){
				ans = ans * pl[x-1] % MOD;
				pl.pop_back();
				k -= 1;
			}else{
				ans *= mi[y-2] * mi[y-1] % MOD;
				ans %= MOD;
				mi.pop_back();
				mi.pop_back();
				k -= 2;
			}
		}else{
			ans = ans * pl[x-1] % MOD;
			k --;
		}
	}
	printf("%ld
", (ans+MOD)%MOD);
	return 0;
}
