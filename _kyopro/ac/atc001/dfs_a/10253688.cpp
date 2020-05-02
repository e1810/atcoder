
#include<bits/stdc++.h>
using P = std::pair<int, int>;

int h, w, dx[] = {0, 1, 0, -1}, dy[] = {1, 0, -1, 0};
std::vector<std::vector<int>> fie(502, std::vector<int>(502, 1)), used(502, std::vector<int>(502, 0));
P st, gl;


bool dfs(P p){
        if(p==gl) return 1;
        used[p.first][p.second] = 1;
        bool flag = 0;
        for(int i=0; i<4; i++){
                int nx = p.first+dx[i], ny = p.second+dy[i];
                if(fie[nx][ny]==0 and !used[nx][ny]) flag += dfs(P(nx, ny));
        }
        return flag;
}


int main(){
        scanf("%d %d", &h, &w);
        for(int i=0; i<h; i++){
                char s[w+1];
                scanf("%s", s);
                for(int j=0; j<w; j++){
                        if(s[j]=='#') fie[i+1][j+1] = 1;
                        else fie[i+1][j+1] = 0;
                        if(s[j]=='s') st = P(i+1, j+1);
                        else if(s[j]=='g') gl = P(i+1, j+1);
                }
        }

        if(dfs(st)) puts("Yes");
        else puts("No");
        return 0;
}
