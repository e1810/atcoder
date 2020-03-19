
#include<stdio.h>

int main(void){
        int n;
        scanf("%d", &n);
        int a[n+1], ans[n+1];
        ans[0] = 0;
        for(int i=1; i<=n; i++) scanf("%d", &a[i]);

        for(int i=n; i>0; i--){
                int cnt = 0;
                for(int j=i+i; j<=n; j+=i){
                        cnt += ans[j];
                }
                ans[0] += ans[i] = (cnt%2!=a[i]);
        }

        printf("%d
", ans[0]);
        for(int i=1; i<=n; i++){
                if(ans[i]) printf("%d ", i);
        }
        puts("");
        return 0;
}
