
#include<bits/stdc++.h>
using ll = long long;


int main(){
        ll n;
        scanf("%lld", &n);

        std::vector<ll> a(n);
        for(ll i=0; i<n; i++) scanf("%lld", &a[i]);
        sort(a.begin(), a.end());


        ll ans = 0;
        for(ll i=0; i<n-2; i++){
                for(ll j=i+1; j<n-1; j++){
                        ll l = j, r = n;
                        while(r-l>1){
                                ll mid = (l+r)/2;
                                if(a[mid]<a[i]+a[j]) l = mid;
                                else r = mid;
                        }
                        ans += l-j;
                }
        }
        printf("%lld
", ans);
        return 0;
}
