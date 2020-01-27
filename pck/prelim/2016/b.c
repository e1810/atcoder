#include<stdio.h>

int main(void){
	int h, r;
	scanf("%d %d", &h, &r);
	if(h+r>0) puts("1");
	else if(h+r==0) puts("0");
	else puts("-1");
	return 0;
}
