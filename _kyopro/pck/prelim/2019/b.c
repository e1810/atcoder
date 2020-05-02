#include<stdio.h>

int main(void){
	int n;
	scanf("%d", &n);

	if(64<n && n<91) puts("1");
	else if(96<n && n<123) puts("2");
	else puts("0");
	return 0;
}
