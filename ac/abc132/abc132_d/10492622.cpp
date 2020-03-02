
#include<bits/stdc++.h>
using ll = int_fast64_t;
const ll MOD = 1e9+7;

ll fact[100000], finv[100000], inv[100000];

void combinit(){
        fact[0] = fact[1] = 1;
        finv[0] = finv[1] = 1;
        inv[1] = 1;
        for(ll i=2; i<100000; i++){
                fact[i] = fact[i-1] * i % MOD;
                inv[i] = MOD - inv[MOD%i] * (MOD / i) % MOD;
                finv[i] = finv[i-1] * inv[i] % MOD;
        }
}

ll comb(ll n, ll k){
        if(n<k or n<0 or k<0) return 0;
        return fact[n] * (finv[k] * finv[n-k] % MOD) % MOD;
}

int main(){
        ll n, k;
        scanf("%ld %ld", &n, &k);

        combinit();
        ll r = n-k;
        for(ll b=1; b<=k; b++){
                printf("%ld
", comb(r+1, b) * comb(k-1, k-b) % MOD);
        }
        return 0;
}
