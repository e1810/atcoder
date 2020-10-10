#include<bits/stdc++.h>
#define REP(i,b,e) for(ll i=b; i<e; i++)

int main(){
	int n;
	scanf("%d", &n);
	int ans = 0, x, y;
	scanf("%d %d", &x, &y);
	while(--n){
		int nx, ny;
		scanf("%d %d", &nx, &ny);
		ans += abs(x-nx) + abs(y-ny);
		x = nx;
		y = ny;
	}
	printf("%d
", ans);
	return 0;
}
