
#include<bits/stdc++.h>
using ll = int_fast64_t;
using P = std::pair<ll,ll>;

int main(){
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        if(a<b) std::swap(a, b);
        if(b<c) std::swap(b, c);
        if(a<b) std::swap(a, b);

        int ans = (a-b)/2 + (a-c)/2, f = (a-b)%2 + (a-c)%2;
        if(f==2) ans++;
        else if(f==1) ans += 2;
        printf("%d
", ans);
        return 0;
}
