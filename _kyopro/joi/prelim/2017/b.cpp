#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, m, gbg;
	scanf("%d %d", &n, &m);
	int hit[m];
	for(int i=0; i<m; i++) scanf("%d %d", &hit[i], &gbg);
	sort(hit, hit+m);

	int ans=0;
	for(int i=m-1; i>0; i--) ans += max(0, n-hit[i]);
	printf("%d\n", ans);
	return 0;
}
