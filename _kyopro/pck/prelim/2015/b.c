#include<stdio.h>

int main(void){
	int h1, h2, k1, k2, a, b, c, d;
	scanf("%d %d %d %d %d %d %d %d", &h1, &h2, &k1, &k2, &a, &b, &c, &d);
	int hp = h1*a + (h1/10)*c + h2*b + (h2/20)*d;
	int kp = k1*a + (k1/10)*c + k2*b + (k2/20)*d;
	if(hp>kp) puts("hiroshi");
	else if(hp==kp) puts("even");
	else puts("kenjiro");
}
