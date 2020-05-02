
#include<bits/stdc++.h>

int main(){
        int n, m;
        scanf("%d %d", &n, &m);
        int li = 1;
        for(int i=0; i<n; i++) li *= 10;

        int sc[m][2];
        for(int i=0; i<m; i++) scanf("%d %d", &sc[i][0], &sc[i][1]);

        for(int i=0; i<li; i++){
                std::string s = std::to_string(i);
                if(s.size()!=n) continue;
                int ok = 1;
                for(int j=0; j<m; j++){
                        if(s[sc[j][0]-1]!=sc[j][1]+'0') ok = 0;
                }
                if(ok){
                        printf("%d
", i);
                        return 0;
                }
        }
        puts("-1");
        return 0;
}
