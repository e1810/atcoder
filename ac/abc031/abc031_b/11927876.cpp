
#include<bits/stdc++.h>

int main(){
	int l, h, n;
	scanf("%d %d %d", &l, &h, &n);
	for(int i=0; i<n; i++){
		int a;
		scanf("%d", &a);
		if(a>h) puts("-1");
		else if(a<l) printf("%d
", l-a);
		else puts("0");
	}
	return 0;
}
