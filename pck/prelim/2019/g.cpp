#include<bits/stdc++.h>
#define REP(i,b,e) for(int i=b;i<e;i++)
using lll = __int128;

int main(){
	int n;
	scanf("%d", &n);
	lll a[n];
	REP(i, 0, n){
		int x;
		scanf("%d", &x);
		a[i] = x;
	}

	int ans = 0;
	REP(i, 1, 1<<n){
		lll l = 1;
		REP(j, 0, n) if((i>>j)&1) {
			l = l * a[j] / std::__gcd<lll>(l,a[j]);
		}

		bool ok = true;
		REP(j, 0, n) if(((i>>j)&1)==0) {
			if(l%a[j]==0) ok = false;
		}
		if(ok) ans++;
	}
	
	printf("%d\n", ans);
	return 0;
}	
	
