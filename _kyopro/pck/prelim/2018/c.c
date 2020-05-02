#include<stdio.h>

int main(void){
	int n, c, i, sm=0;
	scanf("%d %d", &n, &c);
	for(i=0; i<c; i++){
		int tmp;
		scanf("%d", &tmp);
		sm += tmp;
	}
	printf("%d\n", sm/++n+(sm%n>0));
	return 0;
}
