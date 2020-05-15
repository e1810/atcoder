#include<bits/stdc++.h>
using ll = int_fast64_t;
#define rep(i,b,e) for(ll i=b;i<e;i++)

int main(){
        int n, a, b, c;
        scanf("%d %d %d %d", &n, &a, &b, &c);
        std::vector<ll> l(n);
        rep(i, 0, n) scanf("%ld", &l[i]);

        ll ans = 1e18;
        rep(i, 0, (1<<n)*(1<<n)){
                ll A=0, B=0, C=0, tmp=-30;
                for(ll x=i, j=0; x; x/=4, j++){
                        if(x%4==3) A += l[j], tmp += 10;
                        if(x%4==2) B += l[j], tmp += 10;
                        if(x%4==1) C += l[j], tmp += 10;
                }
                if(!(A and B and C)) continue;
                ans = std::min(ans, (ll)(tmp+llabs(A-a)+llabs(B-b)+llabs(C-c)));
        }
        printf("%ld
", ans);
        return 0;
}
