#include<bits/stdc++.h>
using ll = int_fast64_t;
#define REP(i,b,e) for(int i=b; i<e; i++)

const ll MOD = 998244353;
ll dp[5010][5010][3];
int fie[5010][5010];

ll modpow(ll a, ll p, ll m){
	ll ret = 1;
	while(p){
		if(p&1) ret = ret * a % m;
		a = a * a % m;
		p >>= 1;
	}
	return ret;
}

int main(){
	int h, w, k;
	scanf("%d %d %d", &h, &w, &k);
	REP(i, 0, k){
		int a, b;
		char c;
		scanf("%d %d %c", &a, &b, &c);
		if(c=='R') fie[a-1][b-1] = 1;
		if(c=='D') fie[a-1][b-1] = 2;
		if(c=='X') fie[a-1][b-1] = 3;
	}

	REP(i, 0, 3) dp[0][0][i] = modpow(3, h*w-k, MOD);
	ll inv = modpow(3, MOD-2, MOD);

	REP(i, 0, h) REP(j, 0, w) {
		REP(c, 0, 3) if(fie[i][j]!=0 and fie[i][j]!=c+1) dp[i][j][c] = 0;
		if(fie[i][j]==0) REP(c, 0, 3) dp[i][j][c] = dp[i][j][c] * inv % MOD;

		if(fie[i][j]!=2 && j+1<w){
			REP(c, 0, 3){
				dp[i][j+1][c] += (dp[i][j][0] + dp[i][j][2]) % MOD;
				dp[i][j+1][c] %= MOD;
			}
		}
		if(fie[i][j]!=1 && i+1<h){
			REP(c, 0, 3){
				dp[i+1][j][c] += (dp[i][j][1] + dp[i][j][2])%MOD % MOD;
				dp[i+1][j][c] %= MOD;
			}
		}
	}
	
	/*REP(i, 0, h){
		REP(j, 0, w){REP(c, 0, 3) printf("%ld ", dp[i][j][c]); putchar(' ');}
		puts("");
	}*/

	ll ans = 0;
	REP(i, 0, 3) ans = (ans + dp[h-1][w-1][i]) % MOD;
	printf("%ld
", ans);
	return 0;
}
