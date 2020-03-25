
#include<stdio.h>

int main(void){
        char ans[10], c;
        int cursor=0;
        while((c = getchar())!='
'){
                if(c=='B') cursor--;
                else ans[cursor++] = c;
                if(cursor<0) cursor++;
        }
        for(int i=0; i<cursor; i++) putchar(ans[i]);
        puts("");
        return 0;
}
