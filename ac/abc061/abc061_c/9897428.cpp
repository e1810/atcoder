
#include<bits/stdc++.h>
using ll = long long;
using P = std::pair<ll,ll>;

int main(){
        ll n, k;
        scanf("%lld %lld", &n, &k);

        std::vector<P> arr(n);
        for(ll i=0; i<n; i++) scanf("%lld %lld", &arr[i].first, &arr[i].second);
        std::sort(arr.begin(), arr.end());

        for(ll i=0; i<n; i++){
                k -= arr[i].second;
                if(k<=0){
                        printf("%lld
", arr[i].first);
                        return 0;
                }
        }
        return 0;
}
