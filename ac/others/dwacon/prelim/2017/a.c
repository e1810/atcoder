#include<stdio.h>

int main(void){
	int n, a, b;
	scanf("%d %d %d", &n, &a, &b);
	if(a+b-n>0) printf("%d\n", a+b-n);
	else puts("0");
}
