
#include<bits/stdc++.h>

int main(){
        int n, m;
        scanf("%d %d", &n, &m);

        int links[n][n], paths[m][2];
        for(int i=0; i<n*n; i++) links[i/n][i%n]=0;
        for(int i=0; i<m; i++){
                int a, b;
                scanf("%d %d", &a, &b);
                paths[i][0] = a-1;
                paths[i][1] =  b-1;
                links[a-1][b-1] = links[b-1][a-1] = 1;
        }

        int ans = 0;
        for(int i=0; i<m; i++){
                int a=paths[i][0], b=paths[i][1];
                links[a][b] = links[b][a] = 0;

                int cnt = 0, used[n] = {0};
                std::queue<int> que;
                que.push(0);
                while(!que.empty()){
                        int from = que.front(); que.pop();
                        if(used[from]) continue;
                        used[from] = 1;
                        cnt++;
                        for(int j=0; j<n; j++){
                                if(links[from][j] && !used[j]){
                                        que.push(j);
                                }
                        }
                }
                if(cnt!=n) ans++;
                links[a][b] = links[b][a] = 1;
        }

        printf("%d
", ans);
        return 0;
}
