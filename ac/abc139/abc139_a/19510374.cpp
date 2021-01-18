#include<bits/stdc++.h>

int main(){
	char s[3], t[3];
	scanf("%s %s", s, t);
	printf("%d
", (s[0]==t[0]) + (s[1]==t[1]) + (s[2]==t[2]));
	return 0;
}
