#pragma target("avx")
#pragma optimize("O3")
#include<bits/stdc++.h>
using ll = int_fast64_t;
using P = std::pair<int,int>;
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
	std::vector<P> rh(n);
	std::vector<int> rate(n);
	std::map<P, int> cnt;
	REP(i, 0, n){
		scanf("%d %d", &rh[i].fi, &rh[i].se);
		rh[i].se--;
		rate[i] = rh[i].fi;
		cnt[rh[i]]++;
	}
	std::sort(ALL(rate));
	//REP(i, 0, n) printf("%d %d
", sorted[i].fi, sorted[i].se); puts("");

	REP(i, 0, n){
		auto upp = std::upper_bound(ALL(rate), rh[i].fi);
		auto low = std::lower_bound(ALL(rate), rh[i].fi);
		int win = low - rate.begin() + cnt[P(rh[i].fi, (rh[i].se+1)%3)];
		int draw = cnt[rh[i]] - 1;
		int lose = rate.end() - upp + cnt[P(rh[i].fi, (rh[i].se+2)%3)];
		printf("%d %d %d
", win, lose, draw);
	}
	return 0;
}
