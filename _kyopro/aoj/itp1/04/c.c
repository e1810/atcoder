#include<stdio.h>

int main(void){
	while(1){
		int a, b;
		char op;
		scanf("%d %c %d", &a, &op, &b);
		if(op=='?') break;
		if(op=='+') printf("%d\n", a+b);
		if(op=='-') printf("%d\n", a-b);
		if(op=='*') printf("%d\n", a*b);
		if(op=='/') printf("%d\n", a/b);
	}
	return 0;
}
