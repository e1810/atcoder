#include<bits/stdc++.h>
using ll = int64_t;

const ll MOD = 1e9+7;
ll dp[10100][10][100] = {};

int main(){
	int h, w;
	scanf("%d %d", &w, &h);

	dp[0][0][0] = 1;

	for(int i=0; i<h; i++){
		for(int j=0; j<w; j++){
			for(int k=0; k<(1<<w); k++){
				if((k>>j)&1){
					int nx = k & ~(1<<j);
					if(j+1<w) dp[i][j+1][nx] = (dp[i][j+1][nx] + dp[i][j][k]) % MOD;
					else dp[i+1][0][nx] = (dp[i+1][0][nx] + dp[i][j][k]) % MOD;
				}else{
					if(j+1<w && !(k & (1<<(j+1)))){
						int nx = k | (1<<(j+1));
						dp[i][j+1][nx] = (dp[i][j+1][nx] + dp[i][j][k]) % MOD;
					}
					if(i+1<h){
						int nx = k | (1<<j);
						if(j+1<w) dp[i][j+1][nx] = (dp[i][j+1][nx] + dp[i][j][k]) % MOD;
						else dp[i+1][0][nx] = (dp[i+1][0][nx] + dp[i][j][k]) % MOD;
					}
				}
			}
		}
	}

	printf("%ld\n", dp[h-1][w-1][(1<<w-1)]);
	return 0;
}
	
