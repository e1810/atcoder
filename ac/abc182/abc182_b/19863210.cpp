#include<bits/stdc++.h>
#define REP(i,b,e) for(int i=b; i<e; i++)

int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	REP(i, 0, n) scanf("%d", &a[i]);
	
	int ans = 1, acnt = 0;
	REP(i, 2, 1001){
		int cnt = 0;
		REP(j, 0, n){
			if(a[j]%i==0) cnt++;
		}
		if(acnt<=cnt){
			acnt = cnt;
			ans = i;
		}
	}
	printf("%d
", ans);
	return 0;
}
