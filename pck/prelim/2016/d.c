#include<stdio.h>

int gcd(int a, int b){
	if(a<b){
		a ^= b;
		b ^= a;
		a ^= b;
	}
	while(b){
		int tmp = b;
		b = a%b;
		a = tmp;
	}
	return a;
}
	

int main(void){
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	printf("%d\n", a/gcd(a,b)*b/gcd(a,b)*c);
	return 0;
}

		
