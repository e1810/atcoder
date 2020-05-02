
#include<bits/stdc++.h>
using ll = int_fast64_t;

int main(){
        int n;
        scanf("%d", &n);
        std::vector<ll> a(n);
        for(int i=0; i<n; i++) scanf("%ld", &a[i]);
        std::sort(a.begin(), a.end());

        int idx = std::upper_bound(a.begin(), a.end(), a.back()/2) - a.begin();
        ll r;
        if(a.back()-a[idx-1]*2 < a[idx]*2-a.back()) r = a[idx-1];
        else r = a[idx];
        if(r==a.back()) r = a[idx-1];
        printf("%ld %ld
", a.back(), r);
}
