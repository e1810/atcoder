#include<stdio.h>

int main(void){
	int a, b, c, ans = 0;
	scanf("%d %d %d", &a, &b, &c);
	for(int i=a; i<=b; i++) ans += (c%i==0);
	printf("%d\n", ans);
	return 0;
}
