
#include<bits/stdc++.h>
using ll = int_fast64_t;

int main(){
        ll n, m;
        scanf("%ld %ld", &n, &m);

        for(ll i=0; i<=n; i++){
                ll l=-1, r=n-i+1;
                while(r-l>1){
                        ll mid = (l+r)/2;
                        if(2*i+3*mid+4*(n-i-mid)>m) l=mid;
                        else r=mid;
                }
                if(2*i+3*r+4*(n-i-r)==m){
                        if(r<0 or n-i-r<0) continue;
                        printf("%ld %ld %ld
", i, r, n-i-r);
                        return 0;
                }
        }
        puts("-1 -1 -1");
        return 0;
}
