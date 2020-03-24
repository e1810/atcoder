
#include<bits/stdc++.h>

int main(){
        int n, m;
        scanf("%d %d", &n, &m);
        std::vector<int> links[n+m];
        for(int i=0; i<n; i++){
                int k;
                scanf("%d", &k);
                for(int j=0; j<k; j++){
                        int l;
                        scanf("%d", &l);
                        links[i].push_back(n+l-1);
                        links[n+l-1].push_back(i);
                }
        }

        std::vector<bool> used(n+m, 0);
        std::queue<int> que;
        que.push(0);
        while(!que.empty()){
                int from = que.front();
                que.pop();
                used[from] = true;
                for(int to: links[from]){
                        if(!used[to]) que.push(to);
                }
        }

        bool cant = false;
        for(int i=0; i<n; i++) if(!used[i]) cant = true;
        if(cant) puts("NO");
        else puts("YES");
        return 0;
}
