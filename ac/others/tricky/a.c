#include<stdio.h>

int main(void){
	int n;
	double a, b;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%lf %lf", &a, &b);
		printf("%.0lf\n", (a/b));
	}
	return 0;
}
