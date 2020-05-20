#pragma target("avx")
#include<bits/stdc++.h>
using ll = int_fast64_t;
using P = std::pair<ll,ll>;
using V = std::vector<ll>;
template<typename T> using pq = std::priority_queue<T>;
template<typename T> using rpq = std::priority_queue<T, std::vector<T>, std::greater<T>>;

#define REP(i,b,e) for(ll i=b; i<e; i++)
#define be(vec) vec.begin(),vec.end()
#define print(vec) printf("[ ");for(auto &i:vec)printf("%ld ",i);puts("]");
#define scan(vec) for(auto &i:vec)scanf("%ld",&i)
#define fi first
#define se second

const int MOD = 1e9+7;
const ll INF = 1e18;
int dx[] = {0, 1, 0, -1, 1, 1, -1, -1}, dy[] = {1, 0, -1, 0, 1, -1, -1, 1};

int main(){
	int q;
	scanf("%d", &q);
	std::queue<std::pair<char,ll>> que;
	REP(i, 0, q){
		int t;
		scanf("%d", &t);
		if(t==1){
			char c;
			ll x;
			getchar();
			scanf("%c %ld", &c, &x);
			que.emplace(c, x);
		}else{
			ll d;
			V cnt(26);
			scanf("%ld", &d);
			while(d and !que.empty()){
				if(que.front().se<=d){
					d -= que.front().se;
					cnt[que.front().fi-'a'] += que.front().se;
					que.pop();
				}else{
					que.front().se -= d;
					cnt[que.front().fi-'a'] += d;
					d = 0;
				}
			}
			ll ans = 0;
			for(ll x: cnt) ans += x * x;
			printf("%ld
", ans);
		}
	}
	return 0;
}
