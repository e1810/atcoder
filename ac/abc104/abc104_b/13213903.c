#include<stdio.h>
#include<stdbool.h>

int main(void){
        char s[10], c;
        int l = 0, i, cnt = 0;
        bool ok = true;
        while((c=getchar())!='
') s[l++] = c;
        for(i=0; i<l; i++){
                if('a'<=s[i] && s[i]<='z') cnt++;
                else if(s[i]=='C') ok &= (1<i && i<l-1);
                else if(s[i]=='A') ok &= (i==0);
                else ok = false;
        }
        if(ok && cnt==l-2) puts("AC");
        else puts("WA");
        return 0;
}
