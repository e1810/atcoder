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
	V c(n);
	SCAN(c);
	
	ll ans=0, oddmin=1e18, allmin=1e18, oddb=0, allb=0;
	REP(i, 0, n){
		if((i+1)%2) oddmin = std::min(oddmin, c[i]);
		allmin = std::min(allmin, c[i]);
	}

	int q;
	scanf("%d", &q);
	while(q--){
		int t;
		scanf("%d", &t);
		if(t==1){
			int x, a;
			scanf("%d %d", &x, &a);
			if(c[x-1] -oddb*(x%2) - allb <a) continue;
			c[x-1] -= a;
			ans += a;
			if(x%2) oddmin = std::min(oddmin, c[x-1]);
			allmin = std::min(allmin, c[x-1]);
		}else if(t==2){
			int a;
			scanf("%d", &a);
			if(oddmin<a) continue;
			oddmin -= a;
			oddb += a;
			allmin = std::min(allmin, oddmin);
			ans += a * ((n+1)/2);
		}else{
			int a;
			scanf("%d", &a);
			if(allmin<a) continue;
			allmin -= a;
			oddmin -= a;
			allb += a;
			ans += a * n;
		}
		
	}
	printf("%ld
", ans);
	return 0;
}
