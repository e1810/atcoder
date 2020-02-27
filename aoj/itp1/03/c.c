#include<stdio.h>

int main(void){
	while(1){
		int a, b;
		scanf("%d %d", &a, &b);
		if(a+b==0) break;
		if(a>b) printf("%d %d\n", b, a);
		else printf("%d %d\n", a, b);
	}
	return 0;
}
