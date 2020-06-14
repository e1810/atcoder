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
	int n, q;
	scanf("%d %d", &n, &q);
	ll where[n], rate[n];
	std::set<P> top;
	std::vector<std::set<P>> sts(200000);
	REP(i, 0, n){
		ll r, to;
		scanf("%ld %ld", &r, &to);
		sts[to-1].insert(P(r, i));
		where[i] = to-1;
		rate[i] = r;
	}
	
	REP(i, 0, 2e5){	
		if(sts[i].empty()) continue;
		auto itr = sts[i].end(); --itr;
		top.insert(*itr);
	}


	REP(i, 0, q){
		int m, to;
		scanf("%d %d", &m, &to);

		int from = where[m-1];
		sts[from].erase(P(rate[m-1], m-1));
		top.erase(P(rate[m-1], m-1));
		if(!sts[from].empty()){
			auto itr = sts[from].end(); itr--;
			top.insert(*itr);
		}

		if(!sts[to-1].empty()){
			auto itr = sts[to-1].end(); itr--;
			top.erase(*itr);
		}
		sts[to-1].insert(P(rate[m-1], m-1));
		auto itr = sts[to-1].end(); itr--;
		top.insert(*itr);
		
		where[m-1] = to-1;
		itr = top.begin();
		printf("%ld
", (*itr).fi);
	}	
	return 0;
}
