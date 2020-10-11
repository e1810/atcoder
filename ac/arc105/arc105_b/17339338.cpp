#include<bits/stdc++.h>
using ll = int_fast64_t;
#define REP(i,b,e) for(ll i=b; i<e; i++)

int main(){
    int n;
    scanf("%d", &n);
    ll ans = 0;
    REP(i, 0, n){
        ll a;
        scanf("%ld", &a);
        ans = std::gcd(ans, a);
    }
    printf("%ld
", ans);
    return 0;
}
