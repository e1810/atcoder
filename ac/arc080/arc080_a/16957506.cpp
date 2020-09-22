#include<bits/stdc++.h>
#define REP(i,b,e) for(int i=b; i<e; i++)

int main(){
	int n, a, f = 0, t = 0;
	scanf("%d", &n);
	REP(i, 0, n){
		scanf("%d", &a);
		if(a%4==0) f++;
		else if(a%2==0) t++;
	}
	if(2*f+t-!!t>=n-1) puts("Yes");
	else puts("No");
	return 0;
}
