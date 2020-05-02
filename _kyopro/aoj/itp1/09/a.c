#include<stdio.h>

int main(void){
	char s[11];
	scanf("%s", s);
	
	int ans = 0;
	char t[1000];
	while(scanf("%s", t)){
		if(getchar()==EOF) break;
		int same = 1;
		for(int i=0; i<11; i++){
			if(s[i]!=t[i] && s[i]-'A'+'a'!=t[i] && s[i]!=t[i]-'A'+'a'){
				same = 0;
				break;
			}
			if(s[i]=='\0'){
				if('a'<=t[i]&&t[i]<='z' || 'A'<=t[i]&&t[i]<='Z') same = 0;
				break;
			}
		}
		if(same) ans++;
	}
	printf("%d\n", ans);
	return 0;
}
