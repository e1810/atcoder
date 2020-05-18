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
	V a(n);
	REP(i, 0, n){
		scanf("%ld", &a[i]);
		if(a[i]==0){
			printf("%ld
", n);
			return 0;
		}
	}
	a.push_back(2e9);
	if(k==0){
		puts("0");
		return 0;
	}

	int r=0;
	ll tmp = 1, ans = 0;
	REP(l, 0, n){
		while(r<=n and tmp<=k){
			tmp *= a[r];
			r++;
		}
		ans = std::max(ans, (ll)r-l-1);
		tmp /= a[l];
	}
	printf("%ld
", ans);
	return 0;
}
