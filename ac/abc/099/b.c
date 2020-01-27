#include<stdio.h>

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d\n", (b-a)*(b-a-1)/2-a);
}
