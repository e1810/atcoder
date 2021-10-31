#include<bits/stdc++.h>
#define REP(i,b,e) for(int i=b;i<e;i++)
using ll = int_fast64_t;

int main(){
	unsigned long n;
	scanf("%lu", &n);
	unsigned long cnt = __builtin_popcount(n);
	unsigned long a = (1lu << cnt) / 2, ans = 0;
	REP(i, 0, 60) if((n>>i)&1lu) {
		if(a&1lu) ans |= (1lu<<i);
		a >>= 1;
	}
	printf("%lu\n", ans);
	return 0;
}
	
	
