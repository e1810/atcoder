#include<bits/stdc++.h>

int main(){
	char s[] = "abcdefghijklmnopqrstuvwxyz", t[27];
	scanf("%s", t);
	for(int i=0; i<26; i++){
		if(s[i]!=t[i]){
			printf("%cto%c\n", s[i], t[i]);
			return 0;
		}
	}
	return 0;
}
