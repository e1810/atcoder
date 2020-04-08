
#include<bits/stdc++.h>
using ll = int_fast64_t;
const int MOD = 1000000007;
const int MAX = 510000;

ll fac[MAX], finv[MAX], inv[MAX];

void combinit(){
        fac[0] = fac[1] = 1;
        finv[0] = finv[1] = 1;
        inv[1] = 1;
        for(int i=2; i<MAX; i++){
                fac[i] = fac[i - 1]*i % MOD;
                inv[i] = MOD - inv[MOD%i]*(MOD/i) % MOD;
                finv[i] = finv[i-1]*inv[i] % MOD;
        }
}

ll comb(ll n, ll k){
        if(n<0 or k<0) return 0;
        if(n<k) std::swap(n, k);
        return fac[n] * (finv[k] * finv[n-k] % MOD) % MOD;
}

int main(){
        int h, w, a, b;
        scanf("%d %d %d %d", &h, &w, &a, &b);

        combinit();
        ll ans = 0;
        for(int i=b+1; i<=w; i++){
                ans += comb(h-a+i-2, i-1) * comb(a+w-i-1, w-i) % MOD;
                ans %= MOD;
        }
        printf("%ld
", ans);
        return 0;
}
