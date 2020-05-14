#include<iostream>

int main(void){
        char s[10];
        int l = 0, i, cnt = 0;
        bool ok = true;
        while((s[l]=getchar())!='
') l++;
        for(i=0; i<l; i++){
                if('a'<=s[i] and s[i]<='z') cnt++;
                else if(s[i]=='C') ok &= (1<i and i<l-1);
                else if(s[i]=='A') ok &= (i==0);
                else ok = false;
        }
        if(ok and cnt==l-2) puts("AC");
        else puts("WA");
        return 0;
}
