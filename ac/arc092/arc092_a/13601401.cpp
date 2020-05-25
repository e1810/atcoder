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
	std::vector<PP> ps(n*2);
	REP(i, 0, 2*n){
		int a, b;
		scanf("%d %d", &a, &b);
		if(i<n) ps[i] = PP(0, P(a, b));
		else ps[i] = PP(1, P(a, b));
	}
	std::sort(ALL(ps), [](PP x, PP y){
		return x.se.fi<y.se.fi;
	});

	int used[2*n] = {}, ans = 0;
	REP(i, 0, 2*n) if(ps[i].fi) {
		int idx = -1, maxse = -1;
		REP(j, 0, i) if(!ps[j].fi) {
			if(!used[j] and ps[j].se.se < ps[i].se.se){
				if(maxse<ps[j].se.se){
					idx = j;
					maxse = ps[j].se.se;
				}
			}
		}
		if(idx>=0){
			used[idx] = 1;
			ans++;
		}
	}
	printf("%d
", ans);
	return 0;
}
