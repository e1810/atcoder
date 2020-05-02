#include<stdio.h>

int main(void){
	int d;
	while(1){
		scanf("%d", &d);
		if(d<0) break;

		long ans=0, digit=1;
		while(d){
			ans += (d%4)*digit;
			d /= 4;
			digit *= 10;
		}
		printf("%ld\n", ans);
	}
	return 0;
}


