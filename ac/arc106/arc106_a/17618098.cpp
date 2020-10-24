#include<bits/stdc++.h>
using ll = int_fast64_t;

int main(){
	ll n;
	scanf("%ld", &n);

	ll x = 3, thr = 1;
	while(x<n){
		ll m = n - x, fiv = 0;
		while(m%5==0){
			m /= 5;
			fiv++;
		}
		if(fiv!=0 && m==1){
			printf("%ld %ld
", thr, fiv);
			return 0;
		}
		x *= 3;
		thr++;
	}
	puts("-1");
	return 0;
}
