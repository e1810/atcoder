#include<stdio.h>

int main(){
	char s[100], t[100], c;
	int sl=0, tl=0;
	while((c=getchar())!='\n') s[sl++] = c;
	while((c=getchar())!='\n') t[tl++] = c;
	
	int flag = 0;
	for(int i=0; i<sl; i++){
		int cnt = 0;
		for(int j=0; j<tl; j++){
			if(s[(i+j)%sl] == t[j]) cnt++;
			else break;
		}
		if(cnt==tl) flag = 1;
	}

	if(flag) puts("Yes");
	else puts("No");
	return 0;
}
