
#include<bits/stdc++.h>

int main(){
	char s[110];
	scanf("%s", s);
	int a = 0;
	for(int i=0; s[i]!=' '; i++){
		if(a==0 and s[i]=='C') a++;
		if(a==1 and s[i]=='F') a++;
	}
	if(a==2) puts("Yes");
	else puts("No");
}
