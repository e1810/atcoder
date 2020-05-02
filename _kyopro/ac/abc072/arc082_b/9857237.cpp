
#include<bits/stdc++.h>
using ll = long long;

int main(){
        ll n;
        scanf("%lld", &n);
        std::vector<ll> a(n);
        for(ll i=0; i<n; i++) scanf("%lld", &a[i]);

        ll ans = 0;
        for(ll i=0; i<n; i++){
                if(a[i]==i+1){
                        ans++;
                        if(i==n-1) std::swap(a[i-1], a[i]);
                        else std::swap(a[i], a[i+1]);
                }
        }
        printf("%lld
", ans);
        return 0;
}
