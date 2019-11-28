#include<stdio.h>
#include<string.h>

int main(){
	char s[4];
	scanf("%s", s);
	if(!strcmp(s,"SUN"))puts("7");
	if(!strcmp(s,"MON"))puts("6");
	if(!strcmp(s,"TUE"))puts("5");
	if(!strcmp(s,"WED"))puts("4");
	if(!strcmp(s,"THU"))puts("3");
	if(!strcmp(s,"FRI"))puts("2");
	if(!strcmp(s,"SAT"))puts("1");
	return 0;
}
