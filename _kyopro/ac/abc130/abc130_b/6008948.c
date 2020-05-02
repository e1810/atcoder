
#include<stdio.h>

int main(void){
        int n, x, ans, b, i;
        scanf("%d", &n);
        scanf("%d", &x);
        int l[n];
        for(i=0; i<n; i++) scanf("%d", &l[i]);

        ans = 1, b = 0;
        for(i=0; i<n; i++){
                b += l[i];
                if (b<=x) ans++;
        }
        printf("%d
", ans);
        return 0;
}
