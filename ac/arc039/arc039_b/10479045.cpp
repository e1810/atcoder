
#include<bits/stdc++.h>
using ll = int_fast64_t;

const ll MOD = 1000000007;

ll fac[1000000], finv[1000000], inv[1000000];

void combinit() {
    fac[0] = fac[1] = 1;
    finv[0] = finv[1] = 1;
    inv[1] = 1;
    for (ll i=2; i<1000000; i++){
        fac[i] = fac[i - 1] * i % MOD;
        inv[i] = MOD - inv[MOD%i] * (MOD / i) % MOD;
        finv[i] = finv[i - 1] * inv[i] % MOD;
    }
}

ll comb(ll n, ll k){
    if (n < k) return 0;
    if (n < 0 || k < 0) return 0;
    return fac[n] * (finv[k] * finv[n - k] % MOD) % MOD;
}

int main(){
        ll n, k;
        scanf("%ld %ld", &n, &k);
        combinit();
        if(n>k){
                printf("%ld
", comb(n+k-1, k));
        }else{
                k %= n;
                printf("%ld
", comb(n, k));
        }
        return 0;
}
