#include<cstdio>
#include<cstdint>
#include<climits>
#include<algorithm>
using ll = int_fast64_t;
#define REP(i,b,e) for(ll i=b;i<e;i++)

int step;
ll N, A[2020];
ll dp[2020][5050], tree[2020][2020];

void step1(){
	printf("%ld\n", (N/2) * ((N+1)/2));
}

void step2(){
	ll ans = 0;
	REP(i, 0, 1<<N){
		ll tmp = 0, tree = 0;
		REP(j, 0, N){
			if((i>>j)&1) tree += A[j];
			else tmp += tree;
		}
		if(tmp > ans) ans = tmp;
	}
	printf("%ld\n", ans);
}

void step3(){
	REP(i, 0, 1+N) REP(j, 0, 5050) dp[i][j] = INT_MIN;
	dp[0][0] = 0;
	REP(i, 0, N){
		REP(j, 0, 5050){
			dp[i+1][j] = std::max(dp[i+1][j], dp[i][j] + j);
			if(j + A[i] < 5050){
				dp[i+1][j+A[i]] = std::max(dp[i+1][j+A[i]], dp[i][j]);
			}
		}
	}
	ll ans = 0;
	REP(i, 0, 5050) ans = std::max(ans, dp[N][i]);
	printf("%ld\n", ans);
}

void step4(){
	REP(i, 0, N){
		REP(j, 0, 1+N){
			if(j>0 && dp[i+1][j-1] < dp[i][j]){
				dp[i+1][j-1] = dp[i][j];
				tree[i+1][j-1] = tree[i][j];
			}
			if(tree[i][j] <= j*A[i]){
				if(dp[i+1][j] <= dp[i][j] + j*A[i]){
					dp[i+1][j] = dp[i][j] + j*A[i];
					tree[i+1][j] += A[i];
				}
			}
		}
	}
	printf("%ld\n", dp[N][0]);
}


int main(){
	scanf("%d %ld", &step, &N);
	REP(i, 0, N) scanf("%ld", &A[i]);
	if(step==1) step1();
	if(step==2) step2();
	if(step==3) step3();
	if(step==4) step4();
	return 0;
}
