#include<bits/stdc++.h>
#define REP(i,b,e) for(int i=b;i<e;i++)

int main(){
	int n;
	scanf("%d", &n);
	char fie[n][n+1];
	REP(i, 0, n) scanf("%s", fie[i]);

	int ans = 0;
	REP(i, 0, n){
		int pos = -1;
		REP(j, 0, n){
			if(fie[i][j]=='.') pos = j;
		}
		if(pos<0) continue;
		ans++;
		REP(j, 0, pos+1) fie[i][j] = 'o';
		if(i==n-1) continue;
		REP(j, pos, n) fie[i+1][j] = 'o';
	}
	printf("%d
", ans);
	return 0;
}
