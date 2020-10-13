#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	double ans = 100;
	for(int i=0; i<n; i++) ans /= 2;
	for(int i=n; i>n/2; i--){
		ans *= i;
		ans /= i - n/2;
	}
	printf("%.3lf\n", ans);
	return 0;
}

