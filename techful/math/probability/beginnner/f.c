#include<stdio.h>

int gcd(int a, int b){
	if(b==0) return a;
	return gcd(b, a%b);
}

int lcm(int a, int b){
	return a * b / gcd(a, b);
}

int main(){
	int a, b, n;
	scanf("%d %d %d", &a, &b, &n);
	printf("%d\n", n/b + n/a - n/lcm(a,b));
	return 0;
}
