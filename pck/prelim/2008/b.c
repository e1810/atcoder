#include<stdio.h>

int main(void){
	char s[110];
	int i=-1;

	while(~++i){
		scanf("%s", s);
		if(s[0]=='0') break;

		int j=0, a=0, b=0;
		while(++j){
			if(s[j]=='A') a++;
			else if(s[j]=='B') b++;
			else break;
		}
		
		if(a>b) a++;
		else b++;

		printf("%d %d\n", a, b);
	}
	return 0;
}

