
#include<bits/stdc++.h>

int main(){
        int h, w, dx[] = {0, 1, 1, 1, 0, -1, -1, -1}, dy[] = {1, 1, 0, -1, -1, -1, 0, 1};
        scanf("%d %d", &h, &w);
        std::vector<std::vector<int>> fie(h+2, std::vector<int>(w+2, 0));
        for(int i=1; i<=h; i++){
                char s[w+1];
                scanf("%s", s);
                for(int j=1; j<=w; j++){
                        fie[i][j] = (s[j-1]=='#');
                }
        }

        for(int i=1; i<=h; i++){
                for(int j=1; j<=w; j++){
                        if(fie[i][j]){
                                printf("#");
                                continue;
                        }
                        int cnt = 0;
                        for(int k=0; k<8; k++){
                                cnt += fie[i+dx[k]][j+dy[k]];
                        }
                        printf("%d", cnt);
                }
                puts("");
        }

        return 0;
}
