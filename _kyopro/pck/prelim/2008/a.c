#include<stdio.h>

int main(void){
	char name[16];
	int a, b;
	// Please type Ctrl+d at the end when testing without a judging file.
	while(scanf("%s %d %d", name, &a, &b)==3) printf("%s %d %d\n", name, a+b, a*200+b*300);
	return 0;
}
