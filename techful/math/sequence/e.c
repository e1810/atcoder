#include<stdio.h>
#include<stdint.h>

int main(){
	int64_t a, b;
	scanf("%ld %ld", &a, &b);
	if(a<=2*b) puts("0");
	else printf("%ld\n", a-2*b);
	return 0;
}
