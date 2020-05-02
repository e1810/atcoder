
#include<bits/stdc++.h>

int main(){
        int x, y, a, b, c, d;
        scanf("%d %d %d %d %d %d", &x, &y, &a, &b, &c, &d);
        a -= x; b -= y;
        c -= x; d -= y;
        printf("%lf
", abs(a*d-c*b)/2.0);
        return 0;
}
