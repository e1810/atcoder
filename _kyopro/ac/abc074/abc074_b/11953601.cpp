
#include<bits/stdc++.h>

int main(){
	int n, k, ans = 0;
	scanf("%d %d", &n, &k);
	for(int i=0; i<n; i++){
		int x;
		scanf("%d", &x);
		ans += std::min(x, k-x) * 2;
	}
	printf("%d
", ans);
}
