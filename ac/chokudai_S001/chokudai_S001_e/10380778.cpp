
#include<bits/stdc++.h>

int main(){
        int n;
        scanf("%d", &n);
        std::vector<int> a(n);
        for(int i=0; i<n; i++){
                scanf("%d", &a[i]);
                if(a[i]==1){
                        printf("%d
", i+1);
                        break;
                }
        }
        return 0;
}
