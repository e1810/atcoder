
#include<bits/stdc++.h>
using ll = int_fast64_t;

int main(){
        ll d, n, m;
        scanf("%ld %ld %ld", &d, &n, &m);

        ll store[n+1];
        store[0] = 0;
        for(ll i=1; i<n; i++) scanf("%ld", &store[i]);
        store[n] = d;
        std::sort(store, store+n+1);

        ll ans = 0;
        for(ll i=0; i<m; i++){
                ll k;
                scanf("%ld", &k);
                ll idx = std::lower_bound(store, store+n+1, k) - store;
                if(idx==0) ans += store[idx]-k;
                else ans += std::min(k-store[idx-1], store[idx]-k);
        }

        printf("%ld
", ans);
        return 0;
}
