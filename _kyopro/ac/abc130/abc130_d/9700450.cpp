
#include<bits/stdc++.h>
using ll = long long;

int main(){
        ll n, k;
        scanf("%lld %lld", &n, &k);
        std::vector<ll> a(n+1);
        a[0] = 0;
        for(ll i=0; i<n; i++) scanf("%lld", &a[i+1]);

        for(ll i=0; i<n; i++) a[i+1] += a[i];

        ll ans = 0;
        for(ll i=0; i<n; i++){
                ll l = i, r = n+1;
                while(r-l>1){
                        ll mid = (l+r)/2;
                        if(a[mid]-a[i] >= k) r = mid;
                        else l = mid;
                }
                ans += n-l;
        }
        printf("%lld
", ans);
        return 0;
}
