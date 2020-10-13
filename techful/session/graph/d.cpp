#include<bits/stdc++.h>
#define REP(i,b,e) for(int i=(b);i<(e);i++)

int main(){
	int n;
	scanf("%d", &n);
	int a[n] = {}, b[n] = {};
	REP(i, 0, n){
		int x, y;
		scanf("%d %d", &x, &y);
		a[x-1]++;
		b[y-1]++;
	}

	bool ok = true;
	REP(i, 0, n){
		if(a[i]>1 || b[i]>1) ok = false;
	}
	if(ok) puts("OK");
	else puts("NG");
	return 0;
}
