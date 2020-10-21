#include<bits/stdc++.h>
using ll = int_fast64_t;
#define REP(i,b,e) for(ll i=b; i<e; i++)

int main(){
	ll x;
	scanf("%ld", &x);
	for(ll i=-1000; i<=1000; i++){
		for(ll j=-1000; j<=1000; j++){
			ll A = i * i * i * i * i;
			ll B = j * j * j * j * j;
			if(A-B==x){
				printf("%ld %ld
", i, j);
				return 0;
			}
		}
	}
	return 0;
}
