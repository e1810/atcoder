
#include<bits/stdc++.h>

int main(){
	int n, h, w, ans = 0;
	scanf("%d %d %d", &n, &h, &w);
	for(int i=0; i<n; i++){
		int a, b;
		scanf("%d %d", &a, &b);
		ans += (a>=h and b>=w);
	}
	printf("%d
", ans);
	return 0;
}
