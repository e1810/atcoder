#include<stdio.h>

int main(void){
	int a, b, x;
	scanf("%d %d %d", &a, &b, &x);
	
	while(x%500) x++;
	x /= 100;
	if(a<b*2){
		if(a>=b) printf("%d\n", x/10*a + (x%10)/5*b);
		else printf("%d\n", (x/10+!!(x%10))*a);
	}else printf("%d\n", x/5*b);
	return 0;
}
