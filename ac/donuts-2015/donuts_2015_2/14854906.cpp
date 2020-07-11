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
	int n, m;
	scanf("%d %d", &n, &m);
	ll a[n];
	REP(i, 0, n) scanf("%ld", &a[i]);
	P combo[m];
	REP(i, 0, m){
		ll p, c, bit = 0;
		scanf("%ld %ld", &p, &c);
		while(c--){
			int pos;
			scanf("%d", &pos);
			bit |= 1<<(pos-1);
		}
		combo[i] = P(bit, p);
	}

	ll ans = 0;
	REP(i, 0, 1<<n){
		ll score = 0, cnt = 0;
		REP(j, 0, n) if((i>>j)&1){
			score += a[j];
			cnt++;
		}
		if(cnt!=9) continue;
		REP(j, 0, m){
			int cnt = 0;
			REP(k, 0, n){
				if(((combo[j].fi>>k)&1) && ((i>>k)&1)){
					cnt++;
				}
			}
			if(cnt>=3) score += combo[j].se;
		}
		if(ans<=score) ans = score;
	}
	printf("%ld
", ans);
	return 0;
}
