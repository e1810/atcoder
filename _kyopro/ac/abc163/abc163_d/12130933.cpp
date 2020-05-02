
#include<bits/stdc++.h>
using ll = int_fast64_t;
const int MOD = 1e9+7;

int main(){
        int n, k;
        scanf("%d %d", &n, &k);
        n++;
        ll ans = 0;
        for(ll i=k; i<=n; i++) {
                ans += (n-i) * i % MOD + 1;
                ans %= MOD;
        }
        printf("%ld
", ans);
        return 0;
}
