#include<stdio.h>

int main(void){
	int n, a[4];
	scanf("%d", &n);
	for(int i=0; i<4; i++){
		a[3-i] = n%10;
		n /= 10;
	}
	
	for(int i=0; i<8; i++){
		int r = a[0];
		for(int j=0; j<3; j++){
			if((i>>j)&1) r += a[j+1];
			else r -= a[j+1];
		}
		if(r==7){
			printf("%d", a[0]);
			for(int j=0; j<3; j++){
				if((i>>j)&1) printf("+");
				else printf("-");
				printf("%d", a[j+1]);
			}
			puts("=7");
			return 0;
		}
	}
	return 0;
}
