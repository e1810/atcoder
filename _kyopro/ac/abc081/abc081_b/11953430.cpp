
#include<bits/stdc++.h>
using ll = int_fast64_t;
using P = std::pair<ll,ll>;

int main(){
        int n;
        scanf("%d", &n);
        int mn=1e9, tmp;
        for(int i=0; i<n; i++){
                scanf("%d", &tmp);
                mn = std::min(mn, tmp&(-tmp));
        }

        int cnt = -1;
        while(mn){
                cnt++;
                mn >>= 1;
        }

        printf("%d
", cnt);
        return 0;
}
