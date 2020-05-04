#include<bits/stdc++.h>

int main(){
        int n, m;
        scanf("%d %d", &n, &m);
        std::vector<int> h(n);
        for(int i=0; i<n; i++) scanf("%d", &h[i]);

        int max[n] = {};
        for(int i=0; i<m; i++){
                int a, b;
                scanf("%d %d", &a, &b);
                max[a-1] = std::max(max[a-1], h[b-1]);
                max[b-1] = std::max(max[b-1], h[a-1]);
        }

        int ans = 0;
        for(int i=0; i<n; i++){
                if(max[i]<h[i]) ans++;
        }
        printf("%d
", ans);
        return 0;
}
