#include<bits/stdc++.h>
#define REP(i,b,e) for(int i=b; i<e; i++)

int main(){
    int h, w;
    scanf("%d %d", &h, &w);
    char fie[h][w+1];
    REP(i, 0, h) scanf("%s", fie[i]);

    int ans = 0;
    REP(i, 0, h) REP(j, 0, w-1){
        if(fie[i][j]=='.' && fie[i][j+1]=='.') ans++;
    }
    REP(i, 0, h-1) REP(j, 0, w){
        if(fie[i][j]=='.' && fie[i+1][j]=='.') ans++;
    }
    printf("%d
", ans);
    return 0;
}
