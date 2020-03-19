#include<stdio.h>

int main(void){
	int n;
	scanf("%d", &n);
	if(n%3==0){
		if(n%5==0) puts("fizzbuzz");
		else puts("fizz");
	}else if(n%5==0) puts("buzz");
	else printf("%d\n", n);
	return 0;
}
