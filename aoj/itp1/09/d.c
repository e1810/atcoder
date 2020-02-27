#include<stdio.h>
#include<string.h>

int main(void){
	char s[1000];
	scanf("%s", s);
	
	int n;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		char op[8];
		int l, r;
		scanf("%s %d %d", op, &l, &r);
		
		if(!strcmp(op, "print")){
			for(int j=l; j<=r; j++) putchar(s[j]);
			puts("");
		}
		if(!strcmp(op, "reverse")){
			char tmp[r-l+1];
			for(int j=l; j<=r; j++) tmp[j-l] = s[j];
			for(int j=l; j<=r; j++) s[r+l-j] = tmp[j-l];
		}
		if(!strcmp(op, "replace")){
			getchar();
			for(int j=l; j<=r; j++){
				s[j] = getchar();
			}
			getchar();
		}
	}
	return 0;
}
			
