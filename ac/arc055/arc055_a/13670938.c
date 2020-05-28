#include<stdio.h>

int main(void){
        short n = 0;
        char c;
        while((c=getchar())!='
') n = n *10 + c - '0';
        putchar('1');
        while(n-->1) putchar('0');
        puts("7");
        return 0;
}
