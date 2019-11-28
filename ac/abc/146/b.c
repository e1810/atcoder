#include<stdio.h>
int main(){int n,i;char s[10000];scanf("%d %s",&n,s);for(i=0;s[i];i++)printf("%c",(s[i]+n-65)%26+65);puts("");}
