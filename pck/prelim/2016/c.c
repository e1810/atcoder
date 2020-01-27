#include<stdio.h>

int main(void){
	int e, y;
	scanf("%d %d", &e, &y);

	switch(e){
		case 1:
			printf("%d\n", 1867+y);
			break;
		case 2:
			printf("%d\n", 1911+y);
			break;
		case 3:
			printf("%d\n", 1925+y);
			break;
		case 4:
			printf("%d\n", 1988+y);
			break;
		default:
			if(1988<y) printf("H%d\n", y-1988);
			else if(1925<y) printf("S%d\n", y-1925);
			else if(1911<y) printf("T%d\n", y-1911);
			else printf("M%d\n", y-1867);
			break;
	}
	return 0;
}
