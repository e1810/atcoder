
#include<bits/stdc++.h>
using P = std::pair<int,int>;

int fie[12][12], used[12][12], dx[] = {0, 1, 0, -1}, dy[] = {1, 0, -1, 0};

int dfs(int sx, int sy){
        int cnt = 1;
        used[sx][sy] = 1;
        for(int i=0; i<4; i++){
                int nx = sx+dx[i], ny = sy+dy[i];
                if(fie[nx][ny]>0 or used[nx][ny]) continue;
                cnt += dfs(nx, ny);
        }
        return cnt;
}


int main(){
        for(int i=0; i<144; i++) fie[i/12][i%12] = 2;

        int iss = 0;
        for(int i=0; i<10; i++){
                char s[11];
                scanf("%s", s);
                for(int j=0; j<10; j++){
                        iss += (s[j]=='o');
                        fie[i+1][j+1] = (s[j]=='x');
                }
        }

        bool flag = 0;
        for(int i=1; i<11; i++){
                for(int j=1; j<11; j++){
                        for(int k=0; k<144; k++) used[k/12][k%12] = 0;
                        if(iss+1==dfs(i, j)) flag = 1;
                }
        }

        if(flag) puts("YES");
        else puts("NO");
        return 0;
}
