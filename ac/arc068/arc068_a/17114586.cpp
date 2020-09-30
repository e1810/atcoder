#include<bits/stdc++.h>
using ll = int_fast64_t;
#define REP(i,b,e) for(ll i=b; i<e; i++)

int main(){
	ll x;
	scanf("%ld", &x);
	printf("%ld
", x/11*2+(x%11>0)+(x%11>6));
	return 0;
}
