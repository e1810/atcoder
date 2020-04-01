
#include<bits/stdc++.h>

int main(){
        int n, m;
        scanf("%d %d", &n, &m);

        std::vector<int> lht[m];
        for(int i=0; i<m; i++){
                int k;
                scanf("%d", &k);
                for(int j=0; j<k; j++){
                        int tmp;
                        scanf("%d", &tmp);
                        lht[i].push_back(tmp-1);
                }
        }
        int p[m];
        for(int i=0; i<m; i++) scanf("%d", &p[i]);

        int ans = 0;
        for(int i=0; i<(1<<n); i++){
                int bri = 0;
                for(int j=0; j<m; j++){
                        int cnt = 0;
                        for(int k: lht[j]) cnt += (i>>k)&1;
                        if(cnt%2==p[j]) bri++;
                }
                if(bri==m) ans++;
        }
        printf("%d
", ans);
        return 0;
}
