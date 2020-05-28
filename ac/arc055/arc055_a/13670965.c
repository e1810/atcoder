#include<stdio.h>

int main(void){
        short n = 0;
        char c;
        while((c=getchar())!='
') n = n *10 + c - '0';
        n--;
        putchar('1');
        while(n--) putchar('0');
        putchar('7');
        return 0;
}
