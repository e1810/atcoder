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

std::map<ll, ll> prime_factor(ll n){
        std::map<ll, ll> ret;
        for(ll i=2; i*i<=n; i++){
                while(n%i==0){
                        ret[i]++;
                        n /= i;
                }
        }
        if(n!=1) ret[n]++;
        return ret;
}

int main(){
	ll n, m;
	scanf("%ld %ld", &n, &m);

	ll ans = 1;
	Combination comb;
	for(P p: prime_factor(m)) {
		ll c = p.second;
		ans *= comb.C(c+n-1, n-1);
		ans %= MOD;
	}
	printf("%ld
", ans);
	return 0;
}
