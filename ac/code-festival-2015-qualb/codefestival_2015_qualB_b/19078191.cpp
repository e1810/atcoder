#include<bits/stdc++.h>
#define REP(i,b,e) for(int i=b; i<e; i++)

int main(){
	int n, m;
	scanf("%d %d", &n, &m);
	int cnt[m+1] = {};
	REP(i, 0, n){
		int tmp;
		scanf("%d", &tmp);
		cnt[tmp]++;
	}

	REP(i, 0, m+1){
		if(cnt[i]>n/2){
			printf("%d
", i);
			return 0;
		}
	}
	puts("?");
	return 0;
}
