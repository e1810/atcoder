
#include<bits/stdc++.h>
using ll = int_fast64_t;


int main(){
        ll n, a, b;
        scanf("%ld %ld %ld", &n, &a, &b);
        std::vector<ll> h(n);
        for(ll i=0; i<n; i++) scanf("%ld", &h[i]);

        ll l=-1, r=1e9;
        while(r-l>1){
                ll mid = (l+r)/2, cnt = 0;
                for(ll i=0; i<n; i++){
                        cnt += (std::max(0l,h[i]-b*mid) +a-b-1) / (a-b);
                }
                if(cnt>mid) l = mid;
                else r = mid;
        }
        printf("%ld
", r);
        return 0;
}
