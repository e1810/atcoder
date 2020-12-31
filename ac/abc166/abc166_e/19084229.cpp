#include<bits/stdc++.h>
using ll = int_fast64_t;
#define REP(i,b,e) for(int i=b; i<e; i++)

int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	REP(i, 0, n) scanf("%d", &a[i]);

	int cnt[n] = {};
	REP(i, 0, n){
		if(i+a[i]>=n) continue;
		cnt[i+a[i]]++;
	}
	ll ans = 0;
	REP(i, 0, n){
		if(i-a[i]<0) continue;
		ans += cnt[i-a[i]];
	}
	printf("%ld
", ans);
	return 0;
}
