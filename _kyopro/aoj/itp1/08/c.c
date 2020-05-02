#include<stdio.h>

int main(void){
	int alp[26] = {0};
	char c;
	while((c=getchar()) != EOF){
		if('a'<=c && c<='z') alp[c-'a']++;
		if('A'<=c && c<='Z') alp[c-'A']++;
	}
	
	for(int i=0; i<26; i++) printf("%c : %d\n", i+'a', alp[i]);
	return 0;
}
		
