#include<bits/stdc++.h>
#define REP(i,b,e) for(int i=b;i<e;i++)
using ll = int_fast64_t;
const ll MOD = 1e9 + 7;


int main(){
	int qt;
	scanf("%d", &qt);
	
	while(qt--){
		int n;
		scanf("%d", &n);
		ll x[n], orx[64] = {}, andx[64] = {};
		REP(i, 0, n){
			scanf("%lld", &x[i]);
			for(int pos=0; pos<64; pos++){
				orx[pos] += ((x[i]>>pos)&1);
				andx[pos] += ((x[i]>>pos)&1);
			}
		}

		ll ans = 0;
		REP(i, 0, n){
			ll neworx[64], newandx[64];
			REP(j, 0, 64){
				if((x[i]>>j)&1) neworx[j] = n;
				else neworx[j] = orx[j];
				if((x[i]>>j)&1) newandx[j] = andx[j];
				else newandx[j] = 0;
			}
		
			ll orsum = 0, andsum = 0, pow2 = 1;
			REP(j, 0, 64){
				orsum += neworx[j] * pow2 % MOD;
				orsum %= MOD;
				andsum += newandx[j] * pow2 % MOD;
				andsum %= MOD;
				pow2 = (pow2 * 2) % MOD;
			}

			pow2 = 1;
			REP(j, 0, 64){
				ans += andsum * neworx[j] % MOD * pow2 % MOD;
				ans %= MOD;
				pow2 = (pow2 * 2) % MOD;
			}
		}
		printf("%lld\n", ans);
	}
	return 0;
}
		

		

