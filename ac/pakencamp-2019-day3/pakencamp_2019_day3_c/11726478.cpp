
#include<bits/stdc++.h>
using ll = int_fast64_t;

int main(){
	int n, m;
	scanf("%d %d", &n, &m);
	int a[n][m];
	for(int i=0; i<n; i++) for(int j=0; j<m; j++) scanf("%d", &a[i][j]);

	ll ans = 0, tmp;
	for(int i=0; i<m; i++) for(int j=i+1; j<m; j++) {
		tmp = 0;
		for(int k=0; k<n; k++) tmp += std::max(a[k][i], a[k][j]);
		ans = std::max(ans, tmp);
	}

	printf("%ld
", ans);
	return 0;
}
