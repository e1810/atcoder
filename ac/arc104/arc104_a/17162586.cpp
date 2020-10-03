#include<bits/stdc++.h>
#define REP(i,b,e) for(ll i=b; i<e; i++)

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	int d = (a-b)/2;
	printf("%d %d
", a-d, d);
	return 0;
}
