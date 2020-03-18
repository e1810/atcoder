#include<stdio.h>
#include<string.h>

int main(void){
	char s[64], t[64];
	scanf("%s %s", s, t);
	int n = strlen(s), m = strlen(t);
	
	int f = -1;
	for(int i=0; i<n-m+1; i++){
		for(int j=0; j<m; j++){
			if(s[i+j]!=t[j] && s[i+j]!='?') break;
			if(j==m-1) f = i;
		}
	}
	if(f<0){
		puts("UNRESTORABLE");
		return 0;
	}else{
		for(int i=0; i<m; i++) s[f+i] = t[i];
		for(int i=0; i<n; i++){
			if(s[i]=='?') s[i] = 'a';
		}
		printf("%s\n", s);
	}
	return 0;
}
