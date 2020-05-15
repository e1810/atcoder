#include <bits/stdc++.h>
using ll = int_fast64_t;

int main(){
        ll x;
        scanf("%ld", &x);
        ll cnt = -x;
        for(ll i=1; i*i<=x; i++){
                if(x%i==0){
                        cnt += i;
                        if(i*i!=x) cnt += x/i;
                }
        }
        if(cnt>x) puts("Abundant");
        else if(cnt==x) puts("Perfect");
        else puts("Deficient");
        return 0;
}
