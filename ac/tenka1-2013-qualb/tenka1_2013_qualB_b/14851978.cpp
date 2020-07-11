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
	int q, l;
	scanf("%d %d", &q, &l);

	std::stack<P> stk;
	ll size = 0;
	while(q--){
		std::string iss;
		std::cin >> iss;
		if(iss=="Push"){
			ll n, m;
			scanf("%ld %ld", &n, &m);
			stk.emplace(m, n);
			size += n;
			if(size>l){
				puts("FULL");
				return 0;
			}
		}
		if(iss=="Top"){
			if(size==0){
				puts("EMPTY");
				return 0;
			}
			printf("%ld
", stk.top().fi);
		}
		if(iss=="Size") printf("%ld
", size);
		if(iss=="Pop"){
			ll n;
			scanf("%ld", &n);
			size -= n;
			if(size<0){
				puts("EMPTY");
				return 0;
			}
			while(n && stk.top().se <= n){
				n -= stk.top().se;
				stk.pop();
			}
			if(n) stk.top().se -= n;
		}
	}
	puts("SAFE");
	return 0;
}
