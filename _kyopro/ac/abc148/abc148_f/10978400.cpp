
#include<bits/stdc++.h>

int n, u, v, tdis[100010], adis[100010];
std::vector<int> links[100010], used(1e5, 0);

void dfs(int s, int depth, int dis[]){
        used[s] = 1;
        dis[s] = depth;
        for(int a: links[s]){
                if(!used[a]) dfs(a, depth+1, dis);
        }
        return;
}



int main(){
        scanf("%d %d %d", &n, &u, &v);
        u--; v--;

        for(int i=0; i<n-1; i++){
                int a, b;
                scanf("%d %d", &a, &b);
                links[a-1].push_back(b-1);
                links[b-1].push_back(a-1);
        }


        dfs(u, 0, tdis);
        std::fill(used.begin(), used.end(), 0);
        dfs(v, 0, adis);

        int ans = 0;
        for(int i=0; i<n; i++){
                if(tdis[i]<adis[i]) ans = std::max(ans, adis[i]-1);
        }
        printf("%d
", ans);
        return 0;
}
