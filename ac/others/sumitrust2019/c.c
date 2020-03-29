#include<stdio.h>

int main(void){
	int x;
	scanf("%d", &x);
	int flag = 0;
	for(int i=0; i<=1000; i++){
		if(100*i<=x && x<=105*i) flag = 1;
	}
	printf("%d\n", flag);
	return 0;
}
