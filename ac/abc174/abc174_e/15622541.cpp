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
	int n, k;
	scanf("%d %d",  &n, &k);
	V a(n);
	SCAN(a);

	ll l=0, r=1e9+1;
	while(r-l>1){
		ll mid = (l+r)/2.0;
		ll cnt = 0;
		REP(i, 0, n){
			cnt += (a[i]+mid-1)/mid;
			cnt--;
		}
		
		if(cnt>k) l = mid;
		else r = mid;
	}
	printf("%ld
", r);
	return 0;
}
