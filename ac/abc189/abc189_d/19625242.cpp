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
	int n;
	scanf("%d", &n);
	int op[n];
	REP(i, 0, n){
		std::string s;
		std::cin >> s;
		op[i] = (s=="AND");
	}

	ll cnt[1+n][2] = {};
	cnt[0][0] = cnt[0][1] = 1;
	REP(i, 0, n){
		if(op[i]){
			cnt[i+1][0] += cnt[i][0]*2 + cnt[i][1];
			cnt[i+1][1] += cnt[i][1];
		}else{
			cnt[i+1][0] += cnt[i][0];
			cnt[i+1][1] += cnt[i][0] + cnt[i][1]*2;
		}
	}
	printf("%ld
", cnt[n][1]);
	return 0;
}
