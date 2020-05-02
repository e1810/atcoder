#include<stdio.h>

int main(void){
	while(1){
		int n, x, ans = 0;
		scanf("%d %d", &n, &x);
		if(n+x==0) break;
		for(int i=1; i<=n; i++)for(int j=i+1; j<=n; j++)for(int k=j+1; k<=n; k++){
			if(i+j+k==x) ans++;
		}
		printf("%d\n", ans);
	}
	return 0;
}
