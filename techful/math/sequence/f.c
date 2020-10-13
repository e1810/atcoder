#include<stdio.h>
#include<stdint.h>

int main(){
	int64_t n, g, l;
	scanf("%ld %ld %ld", &n, &g, &l);
	printf("%ld\n", g*l/n);
	return 0;
}

