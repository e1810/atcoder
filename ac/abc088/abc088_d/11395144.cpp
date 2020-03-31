
#include<bits/stdc++.h>
using P = std::pair<int,int>;
using PP = std::pair<P, int>;

int main(){
        int h, w, cnt = 0;
        scanf("%d %d", &h, &w);
        int fie[h+2][w+2], ans[h+2][w+2], used[h+2][w+2];
        for(int i=0; i<h+2; i++) for(int j=0; j<w+2; j++){
                fie[i][j] = 1;
                used[i][j] = 0;
                ans[i][j] = INT_MAX;
        }
        for(int i=1; i<=h; i++){
                char s[w+1];
                scanf("%s", s);
                for(int j=1; j<=w; j++){
                        fie[i][j] = (s[j-1]=='#');
                        cnt += (s[j-1]=='#');
                }
        }

        int dx[] = {0, 1, 0, -1}, dy[] = {1, 0, -1, 0};
        std::queue<PP> que;
        que.push(PP(P(1,1), 1));
        while(!que.empty()){
                P p;
                int d;
                std::tie(p, d) = que.front();
                int x=p.first, y=p.second;
                que.pop();
                if(used[x][y]) continue;
                ans[x][y] = d;
                used[x][y] = 1;
                for(int i=0; i<4; i++){
                        int tx = x + dx[i], ty = y + dy[i];
                        if(!fie[tx][ty]) que.push(PP(P(tx,ty), d+1));
                }
        }

        if(ans[h][w]==INT_MAX) puts("-1");
        else printf("%d
", h*w-ans[h][w]-cnt);
        return 0;
}
