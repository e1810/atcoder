
#include<bits/stdc++.h>

int main(){
        int n;
        scanf("%d", &n);
        std::map<int,int> mp;
        for(int i=0; i<n; i++){
                int a;
                scanf("%d", &a);
                mp[a] ^= 1;
        }
        int ans = 0;
        for(auto p: mp) ans += p.second;
        printf("%d
", ans);
        return 0;
}
