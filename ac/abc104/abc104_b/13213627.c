#include<stdio.h>

char s[10], c;
int l, i, cnt, ok=1;

int main(void){
        while((c=getchar())!='
') s[l++] = c;
        for(i=0; i<l; i++){
                if('a'<=s[i] && s[i]<='z') cnt++;
                else if(s[i]=='C'){
                        if(i<2 || l-2<i) ok = 0;
                }
                else if(s[i]=='A'){
                        if(i!=0) ok = 0;
                }
                else ok = 0;
        }
        if(cnt!=l-2) ok = 0;
        if(ok) puts("AC");
        else puts("WA");
        return 0;
}
