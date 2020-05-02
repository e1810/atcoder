
#include<bits/stdc++.h>
using P = std::pair<char,int>;

int main(){
        int n;
        scanf("%d", &n);
        std::vector<P> a(n);
        for(auto& [c, x]: a) scanf("%d %c", &x, &c);

        std::sort(a.begin(), a.end(), [](P a, P b){
                if(a.first!=b.first) return a.first>b.first;
                else return a.second<b.second;
        });
        for(auto [c, x]: a) printf("%d
", x);
        return 0;
}
