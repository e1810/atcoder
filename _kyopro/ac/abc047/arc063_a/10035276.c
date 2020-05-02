
#include<stdio.h>

int main(void){
        int ans = -1, i=-1;
        char s[100010], prev = '-';
        scanf("%s", s);
        while(s[++i]){
                if(s[i]!=prev) ans++;
                prev = s[i];
        }
        printf("%d
", ans);
        return 0;
}
