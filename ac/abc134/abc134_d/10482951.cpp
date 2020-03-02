
#include<bits/stdc++.h>

int main(){
        int n;
        scanf("%d", &n);
        std::vector<int> a(n+1);
        for(int i=1; i<=n; i++) scanf("%d", &a[i]);

        std::vector<int> ans(n+1, 0);
        for(int i=n; i>0; i--){
                int cnt = 0, j = i+i;
                while(j<=n){
                        cnt += ans[j];
                        j += i;
                }
                if(cnt%2!=a[i]){
                        ans[i] = 1;
                        ans[0]++;
                }
        }

        printf("%d
", ans[0]);
        for(int i=1; i<=n; i++){
                if(ans[i]) printf("%d
", i);
        }
        return 0;
}
