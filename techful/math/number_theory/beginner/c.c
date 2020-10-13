#include<stdio.h>

int lcm(int a, int b){
	int ret = a * b;
	while(b){
		int tmp = b;
		b = a%b;
		a = tmp;
	}
	ret /= a;
	return ret;
}

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d\n", lcm(a, b));
	return 0;
}
