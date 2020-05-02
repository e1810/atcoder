
#include<bits/stdc++.h>
using ll = int_fast64_t;

int main(){
        int n, q;
        scanf("%d %d", &n, &q);
        ll a[n], s[q];
        for(int i=0; i<n; i++) scanf("%ld", &a[i]);
        for(int i=0; i<q; i++) scanf("%ld", &s[i]);

        for(int i=1; i<n; i++) a[i] = std::gcd(a[i-1], a[i]);
        for(ll i: s){
                int l=-1, r=n;
                while(r-l>1){
                        int mid = (l+r)/2;
                        if(std::gcd(i, a[mid])==1) r = mid;
                        else l = mid;
                }
                if(r==n) printf("%ld
", std::gcd(i, a[n-1]));
                else printf("%d
", r+1);
        }
        return 0;
}
