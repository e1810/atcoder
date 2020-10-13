#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	double bar = 200;
	for(int i=0; i<n; i++) bar /= 2;
	printf("%.4lf\n", 100 - bar);
	return 0;
}
