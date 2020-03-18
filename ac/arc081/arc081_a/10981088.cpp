
#include<bits/stdc++.h>

int main(){
        int n;
        scanf("%d", &n);
        std::map<int,int> mp;
        for(int i=0; i<n; i++){
                int t;
                scanf("%d", &t);
                mp[t]++;
        }

        int h=0, w=0;
        for(auto p: mp){
                while(p.second>1){
                        h = w;
                        w = p.first;
                        p.second -= 2;
                }
        }

        printf("%ld
", (long)h*w);
        return 0;
}
