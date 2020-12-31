#include<bits/stdc++.h>
using ll = int_fast64_t;
#define REP(i,b,e) for(ll i=b; i<e; i++)

int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	REP(i, 0, n) scanf("%d", &a[i]);
	std::sort(a, a+n);

	ll ans = 0, h=0, l=0;
	REP(i, 0, n){
		if(i<n/2) l += a[i];
		else h += a[i];
	}
	if(n%2){
		ans = std::max(ans, h*2-l*2-a[n/2]-a[n/2+1]);
		h -= a[n/2], l += a[n/2];
		ans = std::max(ans, h*2-l*2+a[n/2]+a[n/2-1]);
	}else{
		ans = std::max(ans, h*2-l*2+a[n/2-1]-a[n/2]);
	}
	printf("%ld
", ans);
}
