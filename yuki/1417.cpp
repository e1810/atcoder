#include<bits/stdc++.h>
#define REP(i,b,e) for(int i=b;i<e;i++)
using ll = int_fast64_t;
const ll MOD = 1e9 + 7;

int hd2(int x){
	int ret = 0;
	while(x%2==0){
		ret++;
		x >>= 1;
	}
	return ret;
}

int main(){
	std::string s;
	std::cin >> s;

	ll dp[s.size()+1][2][3][3] = {};
	dp[0][0][0][0] = 1;
	//dp[0][1][0][0] = 1;
	REP(i, 0, s.size()){
		REP(j, 1, 10){
			if(s[i]-'0'>j){
				if(j==2 or j==4 or j==6 or j==8){
					int cnt = hd2(j);
					REP(k, 0, 3) REP(l, 0, 3){
						dp[i+1][1][std::min(2, k+cnt)][l] =
							(dp[i+1][1][std::min(2, k+cnt)][l] + dp[i][0][k][l]) % MOD;
					}
				}else if(j==5){
					REP(k, 0, 3){
						dp[i+1][1][k][1] = (dp[i+1][1][k][1] + dp[i][0][k][0]) % MOD;
						dp[i+1][1][k][2] =
							(dp[i+1][1][k][2] + dp[i][0][k][1] + dp[i][0][k][2]) % MOD;
					}
				}else{
					REP(k, 0, 3) REP(l, 0, 3) {
						dp[i+1][1][k][l] = (dp[i+1][1][k][l] + dp[i][0][k][l]) % MOD;
					}
				}
			}
			
			if(s[i]-'0'==j){
				if(j==2 or j==4 or j==6 or j==8){
					int cnt = hd2(j);
					REP(k, 0, 3) REP(l, 0, 3){
						dp[i+1][0][std::min(2, k+cnt)][l] =
							(dp[i+1][0][std::min(2, k+cnt)][l] + dp[i][0][k][l]) % MOD;
					}
				}else if(j==5){
					REP(k, 0, 3){
						dp[i+1][0][k][1] = (dp[i+1][0][k][1] + dp[i][0][k][0]) % MOD;
						dp[i+1][0][k][2] =
							(dp[i+1][0][k][2] + dp[i][0][k][1] + dp[i][0][k][2]) % MOD;
					}
				}else{
					REP(k, 0, 3) REP(l, 0, 3) {
						dp[i+1][0][k][l] = (dp[i+1][0][k][l] + dp[i][0][k][l]) % MOD;
					}
				}
			}
			
			if(j==2 or j==4 or j==6 or j==8){
				int cnt = hd2(j);
				REP(k, 0, 3) REP(l, 0, 3){
					dp[i+1][1][std::min(2, k+cnt)][l] =
						(dp[i+1][1][std::min(2, k+cnt)][l] + dp[i][1][k][l]) % MOD;
				}
			}else if(j==5){
				REP(k, 0, 3){
					dp[i+1][1][k][1] = (dp[i+1][1][k][1] + dp[i][1][k][0]) % MOD;
					dp[i+1][1][k][2] =
						(dp[i+1][1][k][2] + dp[i][1][k][1] + dp[i][1][k][2]) % MOD;
				}
			}else{
				REP(k, 0, 3) REP(l, 0, 3) {
					dp[i+1][1][k][l] = (dp[i+1][1][k][l] + dp[i][1][k][l]) % MOD;
				}
			}
		}
		dp[i+1][1][0][0]++;
	}
	
	/*REP(i, 0, s.size()+1){
		REP(j, 0, 3){
			REP(k, 0, 3) printf("%ld ", dp[i][0][j][k]);
			printf("    ");
			REP(k, 0, 3) printf("%ld ", dp[i][1][j][k]);
			printf("\n");
		}
		puts("");
	}*/

	printf("%ld\n", (dp[s.size()][0][2][2] + dp[s.size()][1][2][2]) % MOD);
	return 0;
}
