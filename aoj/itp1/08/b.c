#include<stdio.h>

int main(void){
	while(1){
		int tmp, sm = getchar() - '0';
		if(sm==0) break;
		while((tmp=getchar()) != '\n') sm += tmp - '0';
		printf("%d\n", sm);
	}
	return 0;
}
