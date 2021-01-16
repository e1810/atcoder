#include<bits/stdc++.h>
#define REP(i,b,e) for(int i=b;i<e;i++)

int main(){
	int n, w, k;
	scanf("%d %d %d", &n, &w, &k);
	int a[n];
	REP(i, 0, n) scanf("%d", &a[i]);
	std::sort(a, a+n);
	REP(i, n-k, n) a[i] = 1;
	std::sort(a, a+n);

	int ans = 0;
	REP(i, 0, n){
		w -= a[i];
		if(w>=0) ans++;
		else break;
	}
	printf("%d\n", ans);
	return 0;
}

