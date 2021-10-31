#include<bits/stdc++.h>
using ll = int_fast64_t;

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        ll n, m;
        scanf("%ld %ld", &n, &m);
        ll minans = std::max(1l, n-m);
        ll l = -1, r = n;
        while(r-l > 1){
            ll mid = (r-l)/2 + l;
            ll e = mid * (mid-1) / 2;
            if(e >= m) r = mid;
            else l = mid;
        }
        ll maxans = n - r + (m!=0);
        printf("%ld %ld\n", minans, maxans);
    }
    return 0;
}


        

