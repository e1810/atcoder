#include<bits/stdc++.h>

int main(){
        int n;
        scanf("%d", &n);
        double ans = 0;
        while(n--){
                int a, b, c, d, e;
                scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
                double tmp = a + b + c + d + e*110/900.0;
                if(tmp>ans) ans = tmp;
        }
        printf("%.10lf
", ans);
        return 0;
}
