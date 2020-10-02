#include<bits/stdc++.h>

int main(){
    int x, y;
    scanf("%d %d", &x, &y);
    int g = std::__gcd(x, y);
    printf("%d\n", 1+(x/g+y/g-1)*g);
    return 0;
}
