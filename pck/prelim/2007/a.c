#include<stdio.h>

int main(void){
	int n;

	// Please type Ctrl+d at the end when testing without a judging file.
	while(scanf("%d", &n)!=EOF){
		if(n%39) printf("3C%02d\n", n%39);
		else puts("3C39");
	}
	return 0;
}
