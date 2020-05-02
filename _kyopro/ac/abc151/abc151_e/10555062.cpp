
#include<bits/stdc++.h>
using ll = int_fast64_t;

const int MAX = 510000;
const int MOD = 1000000007;

long long fac[MAX], finv[MAX], inv[MAX];

void COMinit() {
        fac[0] = fac[1] = 1;
        finv[0] = finv[1] = 1;
        inv[1] = 1;
        for (int i = 2; i < MAX; i++){
                fac[i] = fac[i - 1] * i % MOD;
                inv[i] = MOD - inv[MOD%i] * (MOD / i) % MOD;
                finv[i] = finv[i - 1] * inv[i] % MOD;
        }
}

long long COM(int n, int k){
        if (n < k) return 0;
        if (n < 0 || k < 0) return 0;
        return fac[n] * (finv[k] * finv[n - k] % MOD) % MOD;
}

int main() {
        COMinit();
        int n, k;
        scanf("%d %d", &n, &k);
        std::vector<int> a(n);
        for(int i=0; i<n; i++) scanf("%d", &a[i]);
        std::sort(a.begin(), a.end(), std::greater<int>());
        std::vector<int> b(a);
        std::reverse(b.begin(), b.end());

        ll ans = 0;
        for(int i=0; i<n; i++){
                ans = (ans + a[i] * COM(n-1-i, k-1) % MOD) % MOD;
                ans = (ans - b[i] * COM(n-1-i, k-1) % MOD) % MOD;
        }
        if(ans<0) ans += MOD;

        printf("%ld
", ans);
        return 0;
}
