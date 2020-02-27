#include<stdio.h>

int main(void){
	while(1){
		char c = getchar();
		if(c==EOF) break;
		if('a'<=c && c<='z') printf("%c", c+'A'-'a');
		else if('A'<=c && c<='Z') printf("%c", c+'a'-'A');
		else putchar(c);
	}
	return 0;
}
