#include<stdio.h>

int main(){
        int n, ans = 0;
        scanf("%d", &n);
        while(n--){
                int a, b;
                scanf("%d %d", &a, &b);
                ans += a * b;
        }
        printf("%d
", ans + ans/20);
        return 0;
}
