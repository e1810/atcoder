#include<bits/stdc++.h>
using P = std::pair<int,int>;

int main(){
        int h, w, n;
        scanf("%d %d %d", &h, &w, &n);
        std::vector<P> sts(n+1);

        char c[1010][1010];
        for(int j=0; j<w+2; j++) c[0][j] = c[h+1][j] = 'X';
        for(int i=1; i<=h; i++){
                getchar();
                c[i][0] = 'X';
                for(int j=1; j<=w; j++){
                        c[i][j] = getchar();
                        if(c[i][j]=='S') sts[0] = P(i, j);
                        if('0'<=c[i][j] and c[i][j]<='9') sts[c[i][j]-'0'] = P(i, j);
                }
                c[i][w+1] = 'X';
        }

        int dx[] = {0, 1, 0, -1}, dy[] = {1, 0, -1, 0};

        std::function<int(P,P)> bfs = [&](P s, P g){
                int ret = 1e9, used[h+2][w+2] = {};
                std::queue<std::pair<int,P>> que;
                que.emplace(0, s);
                while(!que.empty()){
                        int d = que.front().first;
                        P from = que.front().second;
                        que.pop();
                        if(used[from.first][from.second]) continue;
                        used[from.first][from.second] = 1;
                        if(from==g) ret = d;
                        for(int i=0; i<4; i++){
                                int nx = from.first+dx[i], ny = from.second+dy[i];
                                if(c[nx][ny]=='X' or used[nx][ny]) continue;
                                que.emplace(d+1, P(nx, ny));
                        }
                }
                return ret;
        };

        int ans = 0;
        for(int i=0; i<n; i++){
                ans += bfs(sts[i], sts[i+1]);
        }
        printf("%d
", ans);
        return 0;
}
