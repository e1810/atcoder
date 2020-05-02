
#include<stdio.h>

int main(void){
        int n, c[] = {500, 100, 50, 10, 5, 1};
        scanf("%d", &n);
        int p = 1000-n, ans = 0, i = 0;
        while(p){
                if(p>=c[i]){
                        p -= c[i];
                        ans++;
                }else ++i;
        }
        printf("%d
", ans);
        return 0;
}
