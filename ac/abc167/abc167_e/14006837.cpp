#pragma target("avx")
#include<bits/stdc++.h>
using ll = int_fast64_t;
using P = std::pair<ll,ll>;
using V = std::vector<ll>;
template<typename T> using pq = std::priority_queue<T>;
template<typename T> using rpq = std::priority_queue<T, std::vector<T>, std::greater<T>>;

#define REP(i,b,e) for(ll i=b; i<e; i++)
#define ALL(vec) vec.begin(),vec.end()
#define PRINT(vec) printf("[ ");for(auto &i:vec)printf("%ld ",i);puts("]");
#define SCAN(vec) for(auto &i:vec)scanf("%ld",&i)
#define fi first
#define se second

const int MOD = 998244353;
const ll INF = 1e18;
int dx[] = {0, 1, 0, -1, 1, 1, -1, -1}, dy[] = {1, 0, -1, 0, 1, -1, -1, 1};

ll modpow(ll a, ll p){
	ll ret = 1;
	while(p){
		if(p&1) ret = ret * a % MOD;
		a = a * a % MOD;
		p >>= 1;
	}
	return ret;
}

struct Combination{
        std::vector<ll> fac, finv, inv;
        Combination(int max=6e5): fac(max+1), finv(max+1), inv(max+1) {
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
};

int main(){
	ll n, m, k, ans = 0;
	scanf("%ld %ld %ld", &n, &m, &k);
	Combination comb;
	REP(i, 0, k+1){
		ans += m * modpow(m-1, n-i-1) % MOD * comb.C(n-1, i);
		ans %= MOD;
	}
	printf("%ld
", ans);
	return 0;
}
