#include<stdio.h>

int main(void){
	int n, i=1;
	while(1){
		scanf("%d", &n);
		if(n) printf("Case %d: %d\n", i++, n);
		else break;
	}
	return 0;
}
