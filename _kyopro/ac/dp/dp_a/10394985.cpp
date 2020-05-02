
#include<bits/stdc++.h>
using ll = int_fast64_t;

int main(){
        int n;
        scanf("%d", &n);
        std::vector<int> a(n);
        for(int i=0; i<n; i++) scanf("%d", &a[i]);

        std::vector<int> dp(n, 1e11);
        dp[0] = 0;
        for(int i=0; i<n; i++){
                if(i>0) dp[i] = std::min(dp[i], dp[i-1]+abs(a[i]-a[i-1]));
                if(i>1) dp[i] = std::min(dp[i], dp[i-2]+abs(a[i]-a[i-2]));
        }
        printf("%d
", dp[n-1]);
        return 0;
}
