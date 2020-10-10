#include<bits/stdc++.h>

int main(){
    char s, t;
    scanf("%c %c", &s, &t);
    if(s=='Y') putchar(t-'a'+'A');
    else putchar(t);
    puts("");
    return 0;
}
