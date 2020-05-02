#include<stdio.h>

int main(void){
	int S;
	scanf("%d", &S);
	int m = S/60, s = S%60;
	printf("%d:%d:%d\n", m/60, m%60, s);
	return 0;
}
