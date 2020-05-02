#include<bits/stdc++.h>

int main(){
	int n, k;
	scanf("%d %d", &n, &k);
	
	int def[n+1] = {};
	for(int i=0; i<k; i++){
		int d, s;
		scanf("%d %d", &d, &s);
		def[d] = s;
	}

	int dp[1+n][4][4][4] = {};
	dp[0][0][0][0] = 1;

	for(int i=0; i<n; i++){
		for(int a=0; a<4; a++){
			for(int b=0; b<4; b++){
				for(int c=0; c<4; c++){
					for(int d=1; d<4; d++){
						if(def[i+1] and d!=def[i+1]) continue;
						if(b==c and c==d) continue;
						dp[i+1][b][c][d] += dp[i][a][b][c];
						dp[i+1][b][c][d] %= 10000;
					}
				}
			}
		}
	}

	int ans = 0;
	for(int a=0; a<4; a++){
		for(int b=0; b<4; b++){
			for(int c=1; c<4; c++){
				ans += dp[n][a][b][c];
				ans %= 10000;
			}
		}
	}
	printf("%d\n", ans);
	return 0;
}




