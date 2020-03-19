#include<stdio.h>
#include<string.h>

int main(void){
	int ls[26], n;
	for(int i=0; i<26; i++) ls[i] = 2e9;
	scanf("%d", &n);

	for(int i=0; i<n; i++){
		char s[64];
		scanf("%s", s);
		int tmp[26], j=0;
		memset(tmp, 0, 104);
		while(s[j]!='\0') tmp[s[j++]-'a']++;

		for(int j=0; j<26; j++){
			if(ls[j]>tmp[j]) ls[j] = tmp[j];
		}
	}

	for(int i=0; i<26; i++){
		while(ls[i]--) putchar('a'+i);
	}
	puts("");
	return 0;
}


