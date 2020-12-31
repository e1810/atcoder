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
	bool isp[200000];
	REP(i, 0, 200000) isp[i] = true;
	isp[0] = isp[1] = false;
	REP(i, 0, 200000) if(isp[i]) {
		for(int j=2*i; j<200000; j+=i){
			isp[j] = false;
		}
	}

	int cnt[200000] = {};
	REP(i, 1, 200000){
		if(isp[i] && isp[(i+1)/2]) cnt[i]++;
		cnt[i] += cnt[i-1];
	}

	int q;
	scanf("%d", &q);
	while(q--){
		int l, r;
		scanf("%d %d", &l, &r);
		printf("%d
", cnt[r]-cnt[l-1]);
	}
	return 0;
}
