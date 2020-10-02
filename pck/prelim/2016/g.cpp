#include<bits/stdc++.h>
#define REP(i,b,e) for(int i=b;i<e;i++)
using ll = int_fast64_t;
const int MOD = 1e9+7;

int main(){
	std::string s, t;
	std::cin >> s >> t;

	int n = s.size(), m = t.size();
	ll c[1+n][1+m] = {};
	c[0][0] = 1;
	REP(i, 0, n){
		c[i+1][0] += c[i][0];
		c[i+1][0] %= MOD;
		REP(j, 0, m){
			if(s[i]==t[j]){
				c[i+1][j+1] += c[i][j];
				c[i+1][j+1] %= MOD;
			}
			c[i+1][j+1] += c[i][j+1];
			c[i+1][j+1] %= MOD;
		}
	}

	//REP(i, 0, n+1){REP(j, 0, m+1) printf("%ld ", c[i][j]); puts("");}
	printf("%ld\n", c[n][m]);
	return 0;
}
