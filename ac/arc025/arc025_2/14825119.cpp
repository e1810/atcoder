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
	int h, w;
	scanf("%d %d", &h, &w);
	int white[1+h][1+w] = {}, black[1+h][1+w] = {};
	REP(i, 0, h) REP(j, 0, w) {
		if((i+j)%2) scanf("%d", &white[i+1][j+1]);
		else scanf("%d", &black[i+1][j+1]);
	}

	REP(i, 0, h+1) REP(j, 1, w+1) white[i][j] += white[i][j-1];
	REP(i, 1, h+1) REP(j, 0, w+1) white[i][j] += white[i-1][j];
	REP(i, 0, h+1) REP(j, 1, w+1) black[i][j] += black[i][j-1];
	REP(i, 1, h+1) REP(j, 0, w+1) black[i][j] += black[i-1][j];

	ll ans = 0;
	REP(i, 0, h+1) REP(j, 0, w+1) REP(I, i+1, h+1) REP(J, j+1, w+1) {
		int wc = white[I][J] - white[I][j] - white[i][J] + white[i][j];
		int bc = black[I][J] - black[I][j] - black[i][J] + black[i][j];
		if(wc==bc) ans = std::max(ans, (I-i)*(J-j));
	}
	printf("%ld
", ans);
	return 0;
}
