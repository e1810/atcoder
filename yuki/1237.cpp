#include<bits/stdc++.h>
#define REP(i,b,e) for(int i=b;i<e;i++)
using ll = int_fast64_t;
const ll MOD = 1e9+7;

int main(){
	ll n;
	scanf("%ld", &n);
	ll a[n], zero = 0, huge = 0;
	REP(i, 0, n){
		scanf("%ld", &a[i]);
		if(a[i]==0) zero++;
		if(a[i]>3) huge++;
	}

	if(zero) puts("-1");
	else if(huge) printf("%ld\n", MOD);
	else{
		ll ans = 1;
		REP(i, 0, n){
			if(a[i]==2) ans *= 4;
			if(a[i]==3) ans *= 729;
			if(ans>MOD){
				printf("%ld\n", MOD);
				return 0;
			}
		}
		printf("%ld\n", MOD%ans);
	}
	return 0;
}
