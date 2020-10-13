#include<stdio.h>

int main(){
	int x, ax, y, ay;
	scanf("%d %d %d %d", &x, &ax, &y, &ay);
	int d = (ay-ax) / (y-x);
	int a = ax - (x-1) * d;
	printf("%d+(n-1)*%d\n", a, d);
	return 0;
}
