#pragma target("avx")
#include<bits/stdc++.h>
using ll = int_fast64_t;
using P = std::pair<ll,ll>;
using V = std::vector<ll>;
template<typename T> using pq = std::priority_queue<T>;
template<typename T> using rpq = std::priority_queue<T, std::vector<T>, std::greater<T>>;

#define rep(i,b,e) for(ll i=b; i<e; i++)
#define be(vec) vec.begin(),vec.end()
#define print(vec) printf("[ ");for(auto &i:vec)printf("%ld ",i);puts("]");
#define scan(vec) for(auto &i:vec)scanf("%ld",&i)
#define fi first
#define se second

const int MOD = 1e9+7;
const ll INF = 1e18;
int dx[] = {0, 1, 0, -1, 1, 1, -1, -1}, dy[] = {1, 0, -1, 0, 1, -1, -1, 1};

int main(){
	ll n, m, x, y, z;
	scanf("%ld %ld", &n, &m);
	ll dp[1+n][1+n][8][3];
	rep(i, 0, n+1) rep(j, 0, n+1) {
		dp[i][j][0][0]=-INF, dp[i][j][0][1]=-INF, dp[i][j][0][2]=-INF;
		dp[i][j][1][0]=-INF, dp[i][j][1][1]=-INF, dp[i][j][1][2]=INF;
		dp[i][j][2][0]=-INF, dp[i][j][2][1]=INF, dp[i][j][2][2]=-INF;
		dp[i][j][3][0]=-INF, dp[i][j][3][1]=INF, dp[i][j][3][2]=INF;
		dp[i][j][4][0]=INF, dp[i][j][4][1]=-INF, dp[i][j][4][2]=-INF;
		dp[i][j][5][0]=INF, dp[i][j][5][1]=-INF, dp[i][j][5][2]=INF;
		dp[i][j][6][0]=INF, dp[i][j][6][1]=INF, dp[i][j][6][2]=-INF;
		dp[i][j][7][0]=INF, dp[i][j][7][1]=INF, dp[i][j][7][2]=INF;
	}
	rep(i, 0, 8) rep(j, 0, 3) dp[0][0][i][j] = 0;
	
	
	rep(i, 0, n){
		scanf("%ld %ld %ld", &x, &y, &z);
		rep(I, 0, n){
			if( dp[i+1][I][0][0]+dp[i+1][I][0][1]+dp[i+1][I][0][2] <  dp[i][I][0][0]+dp[i][I][0][1]+dp[i][I][0][2]) dp[i+1][I][0][0]=dp[i][I][0][0], dp[i+1][I][0][1]=dp[i][I][0][1], dp[i+1][I][0][2]=dp[i][I][0][2];
			if( dp[i+1][I][1][0]+dp[i+1][I][1][1]-dp[i+1][I][1][2] <  dp[i][I][1][0]+dp[i][I][1][1]-dp[i][I][1][2]) dp[i+1][I][1][0]=dp[i][I][1][0], dp[i+1][I][1][1]=dp[i][I][1][1], dp[i+1][I][1][2]=dp[i][I][1][2];
			if( dp[i+1][I][2][0]-dp[i+1][I][2][1]+dp[i+1][I][2][2] <  dp[i][I][2][0]-dp[i][I][2][1]+dp[i][I][2][2]) dp[i+1][I][2][0]=dp[i][I][2][0], dp[i+1][I][2][1]=dp[i][I][2][1], dp[i+1][I][2][2]=dp[i][I][2][2];
			if( dp[i+1][I][3][0]-dp[i+1][I][3][1]-dp[i+1][I][3][2] <  dp[i][I][3][0]-dp[i][I][3][1]-dp[i][I][3][2]) dp[i+1][I][3][0]=dp[i][I][3][0], dp[i+1][I][3][1]=dp[i][I][3][1], dp[i+1][I][3][2]=dp[i][I][3][2];
			if(-dp[i+1][I][4][0]+dp[i+1][I][4][1]+dp[i+1][I][4][2] < -dp[i][I][4][0]+dp[i][I][4][1]+dp[i][I][4][2]) dp[i+1][I][4][0]=dp[i][I][4][0], dp[i+1][I][4][1]=dp[i][I][4][1], dp[i+1][I][4][2]=dp[i][I][4][2];
			if(-dp[i+1][I][5][0]+dp[i+1][I][5][1]-dp[i+1][I][5][2] < -dp[i][I][5][0]+dp[i][I][5][1]-dp[i][I][5][2]) dp[i+1][I][5][0]=dp[i][I][5][0], dp[i+1][I][5][1]=dp[i][I][5][1], dp[i+1][I][5][2]=dp[i][I][5][2];
			if(-dp[i+1][I][6][0]-dp[i+1][I][6][1]+dp[i+1][I][6][2] < -dp[i][I][6][0]-dp[i][I][6][1]+dp[i][I][6][2]) dp[i+1][I][6][0]=dp[i][I][6][0], dp[i+1][I][6][1]=dp[i][I][6][1], dp[i+1][I][6][2]=dp[i][I][6][2];
			if(-dp[i+1][I][7][0]-dp[i+1][I][7][1]-dp[i+1][I][7][2] < -dp[i][I][7][0]-dp[i][I][7][1]-dp[i][I][7][2]) dp[i+1][I][7][0]=dp[i][I][7][0], dp[i+1][I][7][1]=dp[i][I][7][1], dp[i+1][I][7][2]=dp[i][I][7][2];
			
			if( dp[i+1][I+1][0][0]+dp[i+1][I+1][0][1]+dp[i+1][I+1][0][2] <  dp[i][I][0][0]+x+dp[i][I][0][1]+y+dp[i][I][0][2]+z) dp[i+1][I+1][0][0]=dp[i][I][0][0]+x, dp[i+1][I+1][0][1]=dp[i][I][0][1]+y, dp[i+1][I+1][0][2]=dp[i][I][0][2]+z;
			if( dp[i+1][I+1][1][0]+dp[i+1][I+1][1][1]-dp[i+1][I+1][1][2] <  dp[i][I][1][0]+x+dp[i][I][1][1]+y-dp[i][I][1][2]-z) dp[i+1][I+1][1][0]=dp[i][I][1][0]+x, dp[i+1][I+1][1][1]=dp[i][I][1][1]+y, dp[i+1][I+1][1][2]=dp[i][I][1][2]+z;
			if( dp[i+1][I+1][2][0]-dp[i+1][I+1][2][1]+dp[i+1][I+1][2][2] <  dp[i][I][2][0]+x-dp[i][I][2][1]-y+dp[i][I][2][2]+z) dp[i+1][I+1][2][0]=dp[i][I][2][0]+x, dp[i+1][I+1][2][1]=dp[i][I][2][1]+y, dp[i+1][I+1][2][2]=dp[i][I][2][2]+z;
			if( dp[i+1][I+1][3][0]-dp[i+1][I+1][3][1]-dp[i+1][I+1][3][2] <  dp[i][I][3][0]+x-dp[i][I][3][1]-y-dp[i][I][3][2]-z) dp[i+1][I+1][3][0]=dp[i][I][3][0]+x, dp[i+1][I+1][3][1]=dp[i][I][3][1]+y, dp[i+1][I+1][3][2]=dp[i][I][3][2]+z;
			if(-dp[i+1][I+1][4][0]+dp[i+1][I+1][4][1]+dp[i+1][I+1][4][2] < -dp[i][I][4][0]-x+dp[i][I][4][1]+y+dp[i][I][4][2]+z) dp[i+1][I+1][4][0]=dp[i][I][4][0]+x, dp[i+1][I+1][4][1]=dp[i][I][4][1]+y, dp[i+1][I+1][4][2]=dp[i][I][4][2]+z;
			if(-dp[i+1][I+1][5][0]+dp[i+1][I+1][5][1]-dp[i+1][I+1][5][2] < -dp[i][I][5][0]-x+dp[i][I][5][1]+y-dp[i][I][5][2]-z) dp[i+1][I+1][5][0]=dp[i][I][5][0]+x, dp[i+1][I+1][5][1]=dp[i][I][5][1]+y, dp[i+1][I+1][5][2]=dp[i][I][5][2]+z;
			if(-dp[i+1][I+1][6][0]-dp[i+1][I+1][6][1]+dp[i+1][I+1][6][2] < -dp[i][I][6][0]-x-dp[i][I][6][1]-y+dp[i][I][6][2]+z) dp[i+1][I+1][6][0]=dp[i][I][6][0]+x, dp[i+1][I+1][6][1]=dp[i][I][6][1]+y, dp[i+1][I+1][6][2]=dp[i][I][6][2]+z;
			if(-dp[i+1][I+1][7][0]-dp[i+1][I+1][7][1]-dp[i+1][I+1][7][2] < -dp[i][I][7][0]-x-dp[i][I][7][1]-y-dp[i][I][7][2]-z) dp[i+1][I+1][7][0]=dp[i][I][7][0]+x, dp[i+1][I+1][7][1]=dp[i][I][7][1]+y, dp[i+1][I+1][7][2]=dp[i][I][7][2]+z;
		}
	}

	/*
	rep(I, 0, m+1){
		rep(j, 0, 8){
			ll t = 0;
			rep(k, 0, 3){
				if((j>>k)&1) t -= dp[n][I][j][k];
				else t += dp[n][I][j][k];
			}
			printf("%d ", t);
			print(dp[n][I][j]);
		}
		puts("");
	}
	*/

	ll ans = 0;
	rep(j, 0, 8){
		ans = std::max(ans, labs(dp[n][m][j][0]) + labs(dp[n][m][j][1]) + labs(dp[n][m][j][2]));
	}
	printf("%ld
", ans);
	return 0;
}
