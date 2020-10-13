#include<stdio.h>
#include<stdint.h>

int main(){
	int64_t a, b, c;
	scanf("%ld %ld %ld", &a, &b, &c);
	printf("%.0lf\n", (double)b*c/a);
	return 0;
}
