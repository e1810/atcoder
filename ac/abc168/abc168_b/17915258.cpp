#include<bits/stdc++.h>
main(){
	char k, s[110];
	scanf("%d %s", &k, s);
	if(strlen(s)>k){
		s[k] = s[k+1] = s[k+2] = '.';
		s[k+3] = ' ';
	}
	puts(s);
	return 0;
}
