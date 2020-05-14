#include<stdio.h>
#include<stdbool.h>

int main(void){
        char s[10], c;
        int l = 0, cnt = 0;
        bool ok = true;
        while((c=getchar())!='
') s[l++] = c;
        for(int i=0; i<l; i++){
                if('a'<=s[i] && s[i]<='z') cnt++;
                else if(s[i]=='C'){
                        if(i<2 || l-2<i) ok = false;
                }
                else if(s[i]=='A'){
                        if(i!=0) ok = false;
                }
                else ok = false;
        }
        if(ok && cnt==l-2) puts("AC");
        else puts("WA");
        return 0;
}
