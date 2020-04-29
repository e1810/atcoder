
#pragma target("avx")
#include<bits/stdc++.h>
using ll = int_fast64_t;
using P = std::pair<ll,ll>;
using V = std::vector<ll>;
template<typename T> using pq = std::priority_queue<T>;
template<typename T> using rpq = std::priority_queue<T, std::vector<T>, std::greater<T>>;

#define rep(i,b,e) for(int i=b; i<e; i++)
#define be(vec) vec.begin(),vec.end()
#define print(vec) printf("[ ");for(auto &i:vec)printf("%ld ",i);puts("]");
#define scan(vec) for(auto &i:vec)scanf("%ld",&i)
#define fi first
#define se second

const int MOD = 1e9+7;
const ll INF = 1e18;
int dx[] = {0, 1, 0, -1, 1, 1, -1, -1}, dy[] = {1, 0, -1, 0, 1, -1, -1, 1};

int main(){
	int h, w;
	scanf("%d %d", &h, &w);
	int a[h][w];
	rep(i, 0, h) rep(j, 0, w) scanf("%d", &a[i][j]);
	rep(i, 0, h) rep(j, 0, w){
		int b;
		scanf("%d", &b);
		a[i][j] = abs(a[i][j]-b);
	}

	//std::vector<std::vector<std::bitset<15000>>> dp(h, std::vector<std::bitset<15000>>(w));
	std::bitset<15000> dp[h][w];
	dp[0][0].set(0);
	rep(i, 0, h) rep(j, 0, w) {
		rep(k, 0, 15000) if(dp[i][j][k]) {
			if(j<w-1){
				dp[i][j+1].set(k+a[i][j]);
				dp[i][j+1].set(abs(k-a[i][j]));
			}
			if(i<h-1){
				dp[i+1][j].set(k+a[i][j]);
				dp[i+1][j].set(abs(k-a[i][j]));
			}
		}
	}
		
	int ans = 15000;
	rep(i, 0, 15000){
		if(dp[h-1][w-1][i]) ans = std::min({ans, i+a[h-1][w-1], abs(i-a[h-1][w-1])});
	}
	printf("%d
", ans);
	return 0;
}
