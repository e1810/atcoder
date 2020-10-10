#include<bits/stdc++.h>
using ll = int_fast64_t;
#define REP(i,b,e) for(ll i=b; i<e; i++)
const int MOD = 1e9+7;
ll pow2[4000001];

int main(){
	pow2[0] = 1;
	REP(i, 1, 4000001) pow2[i] = (pow2[i-1]*2)%MOD;

	int h, w, kogen = 0;
	scanf("%d %d", &h, &w);
	char fie[h][w+1];
	REP(i, 0, h){
		scanf("%s", fie[i]);
		REP(j, 0, w) kogen += (fie[i][j]=='.');
	}

	ll cnt[h][w] = {};
	REP(i, 0, h) REP(j, 0, w) if(fie[i][j]=='.') {
		if(kogen==h*w){
			cnt[i][j] = h+w-1;
			continue;
		}
		for(int k=0; i+k<h && fie[i+k][j]=='.'; k++) cnt[i][j]++;
		for(int k=0; i-k>=0 &&fie[i-k][j]=='.'; k++) cnt[i][j]++;
		for(int k=0; j+k<w && fie[i][j+k]=='.'; k++) cnt[i][j]++;
		for(int k=0; j-k>=0 && fie[i][j-k]=='.'; k++) cnt[i][j]++;
		cnt[i][j] -= 3;
	}

	ll ans = 0;
	REP(i, 0, h) REP(j, 0, w) if(fie[i][j]=='.') {
		ll x = cnt[i][j];
		ans += ((pow2[x]-1) * pow2[kogen-x]) % MOD;
		ans %= MOD;
	}
	printf("%ld
", ans);
	return 0;
}
