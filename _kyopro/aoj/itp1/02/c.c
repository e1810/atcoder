#include<stdio.h>

int main(void){
	int a, b, c, t;
	scanf("%d %d %d", &a, &b, &c);

	if(a>b){
		t = a;
		a = b;
		b = t;
	}
	if(b>c){
		t = c;
		c = b;
		b = t;
	}
	if(a>b){
		t = a;
		a = b;
		b = t;
	}
	printf("%d %d %d\n", a, b, c);
	return 0;
}
