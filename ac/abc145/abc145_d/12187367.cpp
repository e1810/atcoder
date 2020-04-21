
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
	using ll = int_fast64_t;
	std::vector<ll> fac, finv, inv;
	const int MOD = 1000000007;

	Combination(int max=6e5): fac(max+1), finv(max+1), inv(max+1) {
		fac[0] = fac[1] = finv[0] = finv[1] = inv[1] = 1;
		for(int i=2; i<=max; i++){
			fac[i] = fac[i-1] * i % MOD;
			inv[i] = MOD - inv[MOD%i] * (MOD/i) % MOD;
			finv[i] = finv[i-1] * inv[i] % MOD;
		}
	}

	ll P(int n, int r) const {
		if(r<0 or n<r) return 0;
		return fac[n] * finv[n-r];
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
	int x, y;
	scanf("%d %d", &x, &y);
	if((x+y)%3 or x*2<y or x>y*2){
		puts("0");
		return 0;
	}
	Combination com(10000000);
	printf("%ld
", com.C((x+y)/3, (2*x-y)/3));	
	return 0;
}
