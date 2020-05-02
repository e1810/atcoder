
#include<bits/stdc++.h>
using ll = int_fast64_t;

int main(){
        ll n, m;
        scanf("%ld %ld", &n, &m);
        ll a[n+1];
        for(int i=0; i<n; i++) scanf("%ld", &a[i]);
        a[n] = 0;
        n++;

        ll b[n*n];
        for(int i=0; i<n; i++) for(int j=0; j<n; j++) b[i*n+j] = a[i]+a[j];
        std::sort(b, b+n*n);

        ll ans = 0;
        for(int i=0; i<n*n; i++){
                if(b[i]>=m) break;
                ll x = *(std::lower_bound(b, b+n*n, m-b[i]) - 1);
                ans = std::max(ans, b[i]+x);
        }
        printf("%ld
", ans);
        return 0;
}
