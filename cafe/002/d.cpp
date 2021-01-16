#include<bits/stdc++.h>
#define REP(i,b,e) for(int i=b;i<e;i++)

int main(){
	int n;
	scanf("%d", &n);
	int a[n], b[n], c[n];
	REP(i, 0, n) scanf("%d", &a[i]);
	REP(i, 0, n) scanf("%d", &b[i]);
	REP(i, 0, n) c[i] = a[i]-b[i];
	std::sort(c, c+n, std::greater<int>());

	int sum = 0, ans = 0;
	REP(i, 0, n){
		if(sum+c[i]>=0){
			sum += c[i];
			ans++;
		}else break;
	}
	printf("%d\n", ans);
	return 0;
}
