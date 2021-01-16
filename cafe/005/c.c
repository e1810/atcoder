#include<stdio.h>
#include<stdint.h>

int main(){
	int64_t a, b, c;
	scanf("%ld %ld %ld", &a, &b, &c);
	printf("%ld\n", (b*c+a-1) / a);
	return 0;
}
