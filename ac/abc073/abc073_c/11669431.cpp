
#include<bits/stdc++.h>

int main(){
        std::map<int,bool> mp;
        int n;
        scanf("%d", &n);
        for(int i=0; i<n; i++){
                int a;
                scanf("%d", &a);
                mp[a] ^= 1;
        }

        int ans = 0;
        for(auto p: mp){
                if(p.second) ans ++;
        }
        printf("%d
", ans);
        return 0;
}
