#include<bits/stdc++.h>
#define REP(i,b,e) for(int i=b; i<e; i++)

int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	std::fill(a, a+n, 1e9);
	REP(i, 0, n-1){
		int b;
		scanf("%d", &b);
		a[i] = std::min(a[i], b);
		a[i+1] = std::min(a[i+1], b);
	}
	int ans = 0;
	REP(i, 0, n) ans += a[i];
	printf("%d
", ans);
	return 0;
}
