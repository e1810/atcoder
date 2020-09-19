#include<bits/stdc++.h>
using ll = int_fast64_t;
#define REP(i,b,e) for(ll i=b; i<e; i++)

int main(){
	int n, ans = 0;
	scanf("%d", &n);
	REP(i, 1, n){
		ans += n/i;
		if(n%i==0) ans--;
	}
	printf("%d
", ans);
}
