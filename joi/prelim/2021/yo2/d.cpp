#include<bits/stdc++.h>
#define REP(i,b,e) for(int i=b;i<e;i++)
using ll = int_fast64_t;

int main(){
	int n, k;
	scanf("%d %d", &n, &k);
	int a[n], b[n];
	REP(i, 0, n) scanf("%d", &a[i]);
	REP(i, 0, n) scanf("%d", &b[i]);

	if(k==1){
		ll ans = 0;
		REP(i, 0, n){
			ans += b[i];
			if(i==n-1) ans += a[i];
		}
		printf("%ld\n", ans);
	}else if(k==2){
		ll ans = 0;
		int pos[2] = {};
		REP(i, 0, n){
			if(pos[0]==pos[1]){
				ans += a[i] - pos[0];
				ans += (b[i]+1) / 2;
				pos[0] = pos[1] = a[i];
				if(b[i]&1) pos[0]++;
			}else{
				ans += a[i] - pos[1];
				ans += b[i] / 2;
				pos[0] = pos[1] = a[i];
				if(b[i]&1==0) pos[0]++;
			}
			printf("%d %d %ld\n", pos[0], pos[1], ans);
		}
		printf("%ld\n", ans);
	}
	return 0;
}


