
#include<bits/stdc++.h>

int main(){
        int n;
        scanf("%d", &n);
        std::vector<int> a(n);
        for(int i=0; i<n; i++){
                scanf("%d", &a[i]);
                printf("%d", a[i]);
                if(i==n-1) puts("");
                else putchar(',');
        }
        return 0;
}
