#include<bits/stdc++.h>
#define REP(i,b,e) for(int i=(b);i<(e);i++)
using ll = int_fast64_t;

int main(){
	int n, m;
	scanf("%d %d", &n, &m);
	int a[n], b[m];
	REP(i, 0, n) scanf("%d", &a[i]);
	REP(i, 0, m) scanf("%d", &b[i]);
	
	ll ans = 0;
	REP(i, 0, 1<<(n+m)){
		if(__builtin_popcount(i)!=n) continue;
		ll tmp = 0;
		int I = 0, J = 0;
		REP(j, 0, n+m){
			tmp *= 10;
			if((i>>j)&1) tmp += a[I++];
			else tmp += b[J++];
		}
		ans = std::max(ans, tmp);
	}
	
	printf("%ld\n", ans);
	return 0;
}
