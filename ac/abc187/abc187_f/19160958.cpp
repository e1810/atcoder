#include<bits/stdc++.h>
using ll = int_fast64_t;
using P = std::pair<ll,ll>;
using PP = std::pair<ll,P>;

#define REP(i,b,e) for(int i=b; i<e; i++)
#define PRINT(vec) {printf("[ ");for(auto &i:vec)printf("%ld ",i);puts("]");}
#define fi first
#define se second

const int MOD = 1e9+7;
int dx[] = {0, 1, 0, -1, 1, 1, -1, -1}, dy[] = {1, 0, -1, 0, 1, -1, -1, 1};

int main(){
	int n, m;
	scanf("%d %d", &n, &m);
	bool links[n][n] = {};
	REP(i, 0, m){
		int a, b;
		scanf("%d %d", &a, &b);
		links[a-1][b-1] = links[b-1][a-1] = 1;
	}
	std::vector<int> dp[1<<n][18];
	REP(i, 1, 1<<n) REP(j, 0, 18) dp[i][j].push_back(1);

	REP(i, 0, 1<<n){
		int nowcnt = 0;
		REP(j, 0, 18) nowcnt += !!dp[i][j].size();

		REP(j, 0, n){
			int idx = -1, cnt = 0;
			REP(k, 0, 18) cnt += !!dp[i|(1<<j)][k].size();
			REP(k, 0, 18){
				bool ok = true;
				for(int l: dp[i][k]){
					if(!links[j][l]) ok = false;
				}
				if(ok) idx = k;
			}
			if(nowcnt+(!dp[i][idx].size())>=cnt) continue;
			REP(k, 0, 18) dp[i|(1<<j)][k] = dp[i][k];
			dp[i|(1<<j)][idx].push_back(j);
		}
	}

	int ans = 0;
	REP(i, 0, 18) ans += !!dp[(1<<n)-1][i].size();
	printf("%d
", ans);
	return 0;
}
