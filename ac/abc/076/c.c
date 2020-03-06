#include<stdio.h>

int sl=0, tl=0;
char s[51], t[51];

void restore(int idx){
	for(int i=0; i<sl; i++){
		if(idx<=i && i<idx+tl) s[i] = t[i-idx];
		else if(s[i]=='?') s[i] = 'a';
	}
}

int main(void){
	while((s[sl]=getchar())!='\n') sl++;
	while((t[tl]=getchar())!='\n') tl++;

	int idx = -1;
	for(int i=0; i<=sl-tl; i++){
		int can = 1;
		for(int j=0; j<tl; j++){
			if(s[i+j]!=t[j] && s[i+j]!='?') can = 0;
		}
		if(can) idx = i;
	}
	
	if(idx>=0){
		restore(idx);
		printf("%s", s);
	}else puts("UNRESTORABLE");
	return 0;
}
