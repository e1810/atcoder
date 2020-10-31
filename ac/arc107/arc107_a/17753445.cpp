#include<bits/stdc++.h>
using ll = int_fast64_t;
const int MOD = 998244353;

int main(){
    ll a, b, c;
    scanf("%ld %ld %ld", &a, &b, &c);
    ll A = a * (1+a) / 2 % MOD;
    ll B = b * (1+b) / 2 % MOD;
    ll C = c * (1+c) / 2 % MOD;
    printf("%ld
", A*B%MOD * C % MOD);
    return 0;
}
