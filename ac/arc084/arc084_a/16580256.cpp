#include<bits/stdc++.h>
using ll = int_fast64_t;

#define REP(i,b,e) for(ll i=b; i<e; i++)
#define SCAN(vec) for(auto &i:vec)scanf("%d",&i)

int main(){
        int n;
        scanf("%d", &n);
        int a[n+1], b[n], c[1+n];
        a[n] = c[n] = 1e9+7;
        REP(i, 0, n) scanf("%d", &a[i]);
        REP(i, 0, n) scanf("%d", &b[i]);
        REP(i, 0, n) scanf("%d", &c[i]);
        std::sort(a, a+n+1);
        std::sort(b, b+n);
        std::sort(c, c+n+1);

        ll ans = 0, posa = 0, posc = 0;
        REP(i, 0, n){
            while(a[posa]<b[i]) posa++;
            while(c[posc]<=b[i]) posc++;
            ans += posa * (n-posc);
        }
        printf("%ld
", ans);
        return 0;
}
