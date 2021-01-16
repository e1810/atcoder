#include<bits/stdc++.h>
#define REP(i,b,e) for(int i=b;i<e;i++)

int main(){
	int n;
	scanf("%d", &n);

	int a, b, c, top = -1;
	a = b = c = 0;
	REP(i, 0, 30){
		if((n>>i)&1){
			a |= (1<<i);
			b |= (1<<i);
			top = i;
		}
	}
	a &= ~(1<<top);
	c |= (1<<top);
	
	if(a) printf("%d %d %d\n", a, b, c);
	else puts("-1 -1 -1");
	return 0;
}
