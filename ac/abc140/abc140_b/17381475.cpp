#include<cstdio>
#define REP(i,b,e) for(int i=b; i<e; i++)

int main(){
	int n;
	scanf("%d", &n);
	int a[n], b[n], c[n-1];
	REP(i, 0, n) scanf("%d", &a[i]);
	REP(i, 0, n) scanf("%d", &b[i]);
	REP(i, 0, n-1) scanf("%d", &c[i]);

	int ans = b[a[0]-1];
	REP(i, 1, n){
		ans += b[a[i]-1];
		if(a[i-1]+1==a[i]){
			ans += c[a[i-1]-1];
		}
	}
	printf("%d
", ans);
	return 0;
}
