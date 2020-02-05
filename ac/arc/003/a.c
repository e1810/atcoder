#include<stdio.h>

int main(void){
	int n, ans=0;
	scanf("%d", &n);
	getchar();
	for(int i=0; i<n; i++){
		char c = getchar();
		int tmp = 'F'-c-1;
		if(tmp>=0) ans += tmp;
	}
	printf("%.15lf\n", ans/(double)n);
	return 0;
}
