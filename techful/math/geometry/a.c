#include<stdio.h>
const double PI = 3.14;

int main(){
	int r, w, n;
	scanf("%d %d %d", &r, &w, &n);
	printf("%.1lf\n", PI*r*r / (n*w));
	return 0;
}
