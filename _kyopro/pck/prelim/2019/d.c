#include<stdio.h>

int main(void){
        int n;
        scanf("%d", &n);
        int mx=0, mn=2000, i;
        for(i=0; i<n; i++){
                int tmp;
                scanf("%d", &tmp);
                mx = tmp>mx? tmp:mx;
                mn = tmp<mn? tmp:mn;
        }
        printf("%d\n", (mx-mn+1)/2);
        return 0;
}

