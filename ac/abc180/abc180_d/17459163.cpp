#include<bits/stdc++.h>
using ll = int_fast64_t;

int main(){
    ll x, y, a, b;
    scanf("%ld %ld %ld %ld", &x, &y, &a, &b);
    ll ans = 0;
    if(b<y){
        while(x<b){
            x *= a;
            ans++;
        }
    }else{
        ll yy = y/a;
        while(x<yy){
            x *= a;
            ans++;
        }
    }

    printf("%ld
", ans + std::max(0l, y-x-1)/b);
    return 0;
}
