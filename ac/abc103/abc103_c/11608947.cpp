
#include<bits/stdc++.h>

int n, ans, tmp, i;
int main(){
	scanf("%d", &n);
	for(;i<n;i++){
		scanf("%d", &tmp);
		ans += tmp-1;
	}
	printf("%d
", ans);
	return 0;
}
