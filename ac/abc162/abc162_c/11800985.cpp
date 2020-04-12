
#include<bits/stdc++.h>
using ll = int_fast64_t;

int main(){
        int n;
        scanf("%d", &n);
        ll ans = 0;
        for(int i=1; i<=n; i++) for(int j=1; j<=n; j++) for(int k=1; k<=n; k++) {
                ans += std::gcd(i, std::gcd(j, k));
        }
        printf("%ld
", ans);
}
