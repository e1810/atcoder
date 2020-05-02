
#include<bits/stdc++.h>

int main(){
        int n;
        scanf("%d", &n);
        int a[2][n];
        for(int i=0; i<2*n; i++) scanf("%d", &a[i/n][i%n]);

        int ans = 0;
        for(int i=0; i<n; i++){
                int tmp = 0;
                for(int j=0; j<n; j++){
                        if(i>=j) tmp += a[0][j];
                        if(i<=j) tmp += a[1][j];
                }
                ans = std::max(ans, tmp);
        }
        printf("%d
", ans);
        return 0;
}
