
#include<bits/stdc++.h>
using lint = int_fast64_t;

int main(){
        lint h, w;
        scanf("%ld %ld", &h, &w);

        lint ans = 1e18;
        for(lint i=0; i<=w; i++){
                lint a = h*i, b = h/2*(w-i), c = (h+1)/2*(w-i);
                ans = std::min(ans, std::max({a,b,c})-std::min({a,b,c}));
                b = (w-i)/2*h, c = (w-i+1)/2*h;
                ans = std::min(ans, std::max({a,b,c})-std::min({a,b,c}));
        }

        for(lint i=0; i<=h; i++){
                lint a = w*i, b = w/2*(h-i), c = (w+1)/2*(h-i);
                ans = std::min(ans, std::max({a,b,c})-std::min({a,b,c}));
                b = (h-i)/2*w, c = (h-i+1)/2*w;
                ans = std::min(ans, std::max({a,b,c})-std::min({a,b,c}));
        }
        printf("%ld
", ans);
        return 0;
}
