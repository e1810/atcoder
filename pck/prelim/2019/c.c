#include<stdio.h>

int main(void){
	int n;
	scanf("%d", &n);

	int ans = 1;
	while(n/2){
		n /= 2;
		ans *= 2;
	}
	printf("%d\n", ans);
	return 0;
}
