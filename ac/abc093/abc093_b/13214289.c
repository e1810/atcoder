#pragma target("avx2")
#pragma optimize("O3")
#include<stdio.h>

int main(void){
        unsigned a, b, k, i;
        scanf("%u %u %u", &a, &b, &k);
        if(b-a>=2*k){
                for(i=a; i<a+k; i++) printf("%u
", i);
                for(i=b-k+1; i<=b; i++) printf("%u
", i);
        }else{
                for(i=a; i<=b; i++) printf("%u
", i);
        }
        return 0;
}
