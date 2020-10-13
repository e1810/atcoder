#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	double bar = 100;
	for(int i=0; i<n; i++) bar *= (double)(n-1)/n;
	printf("%.3lf%%\n", 100 - bar);
	return 0;
}

