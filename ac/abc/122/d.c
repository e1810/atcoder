#include<stdio.h>
#include<string.h>

int main(){
	int n;
	scanf("%d", &n);
	
	int dp[n+1][5][5][5];
	memset(dp, 0, (n+1)*500);
	dp[0][0][0][0] = 1;
	for(int i=1; i<=n; i++){
		for(int a=0; a<5; a++){
			for(int b=0; b<5; b++){
				for(int c=0; c<5; c++){
					for(int d=1; d<5; d++){
						if(b==1 && c==3 && d==2) continue;
						if(b==1 && c==2 && d==3) continue;
						if(b==3 && c==1 && d==2) continue;
						
						if(a==1 && c==3 && d==2) continue;
						if(a==1 && b==3 && d==2) continue;
					
						dp[i][b][c][d] += dp[i-1][a][b][c];
						dp[i][b][c][d] %= 1000000007;
					}
				}
			}
		}
	}
	
	int ans = 0;
	for(int i=1; i<5; i++) for(int j=1; j<5; j++) for(int k=1; k<5; k++){
		ans += dp[n][i][j][k];
		ans %= 1000000007;
	}
	printf("%d\n", ans);
	return 0;
}
