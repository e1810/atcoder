
#include<bits/stdc++.h>

int main(){
        int a, b;
        scanf("%d %d", &a, &b);
        printf("%d
", std::max({a+b,a-b,a*b}));
        return 0;
}
