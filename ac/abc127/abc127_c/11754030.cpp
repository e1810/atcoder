
#include<bits/stdc++.h>

int main(){
        int n, m;
        scanf("%d %d", &n, &m);
        int a[n+1];
        memset(a, 0, sizeof(a));
        for(int i=0; i<m; i++){
                int l, r;
                scanf("%d %d", &l, &r);
                a[l-1]++;
                a[r]--;
        }
        for(int i=0; i<n; i++) a[i+1] += a[i];

        int ans = 0;
        for(int i=0; i<=n; i++) ans += (a[i]==m);
        printf("%d
", ans);
        return 0;
}
