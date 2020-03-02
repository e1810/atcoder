
#include<bits/stdc++.h>

int main(){
        int n;
        scanf("%d", &n);
        std::vector<int> a(n);
        for(int i=0; i<n; i++) scanf("%d", &a[i]);

        int l=0, r=1e9+1;
        while(r-l>1){
                int mid = (r-l)/2 + l;
                std::vector<int> ans(n+1);
                ans[0] = mid;
                for(int i=1; i<=n; i++){
                        ans[i] = a[i-1] - ans[i-1];
                }

                if(ans[0]<=ans[n]) l = mid;
                else r = mid;
        }

        int prev = l;
        for(int i=1; i<n; i++){
                printf("%d ", 2*prev);
                prev = a[i-1] - prev;
        }
        printf("%d
", 2*prev);

        return 0;
}
