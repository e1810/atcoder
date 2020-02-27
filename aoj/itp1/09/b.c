#include<stdio.h>

int main(void){
	while(1){
		char s[201], c;
		int l=0;
		while((c=getchar())!='\n') s[l++] = c;
		if(s[0]=='-') break;
		
		int n, sm=0;
		scanf("%d", &n);
		for(int i=0; i<n; i++){
			int tmp;
			scanf("%d", &tmp);
			sm += tmp;
		}
		
		for(int i=0; i<l; i++) putchar(s[(sm+i)%l]);
		puts("");
		getchar();
	}
	return 0;
}
