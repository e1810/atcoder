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

std::vector<ll> fac, finv, inv;

struct Combination{        
	Combination(int max=6e5){
		fac.resize(max+1);
		finv.resize(max+1);
		inv.resize(max+1);
                fac[0] = fac[1] = finv[0] = finv[1] = inv[1] = 1;
                for(int i=2; i<=max; i++){
                        fac[i] = fac[i-1] * i % MOD;
                        inv[i] = MOD - inv[MOD%i] * (MOD/i) % MOD;
                        finv[i] = finv[i-1] * inv[i] % MOD;
                }
        }

        ll C(int n, int r) const {
                if(n<0 or n<r) return 0;
                return fac[n] * (finv[r] * finv[n-r] % MOD) % MOD;
        }

        ll H(int n, int r) const {
                if(n<0 or r<0) return 0;
                if(r==0) return 1;
                return C(n+r-1, r);
        }
};

int main(){
	int n, k;
	scanf("%d %d", &n, &k);
	Combination comb;
	ll ans = 0;
	REP(i, 0, std::min(n, k+1)){
		ans += comb.C(n, i) * comb.H(n-i, i) % MOD;
		ans %= MOD;
	}
	printf("%ld
", ans);
	return 0;
}
