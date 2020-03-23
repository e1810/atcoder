
#include<stdio.h>

int main(void){
        long long a, b, c;
        scanf("%lld %lld %lld", &a, &b, &c);
        if(c-a-b>=0 &&  4*a*b<(c-a-b)*(c-a-b)) puts("Yes");
        else puts("No");
        return 0;
}
