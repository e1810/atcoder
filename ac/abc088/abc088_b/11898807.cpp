
#include<bits/stdc++.h>

int main(){
        int n;
        scanf("%d", &n);
        int a[n];
        for(int i=0; i<n; i++) scanf("%d", &a[i]);
        std::sort(a, a+n, std::greater<int>());

        int al=0, bo=0;
        for(int i=0; i<n; i++){
                if(i%2) bo += a[i];
                else al += a[i];
        }
        printf("%d
", al-bo);
}
