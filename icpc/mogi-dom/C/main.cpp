#include<bits/stdc++.h>
#define REP(i,b,e) for(int i=(b);i<(e);i++)

int solve(int h, int w, char fie[10][10]){
    /*REP(i, 0, h){
        REP(j, 0, w) putchar(fie[i][j]);
        putchar('\n');
    }
    putchar('\n');*/
    
    bool ok = true;
    REP(i, 0, h) REP(j, 0, w) if(fie[i][j]=='.') ok = false;
    if(ok) return 1;

    int ret = 0;
    REP(i, 0, h) REP(j, 0, w) if(fie[i][j]=='.') {
        if(i<h-1 && j<w-1 && fie[i][j]=='.' && fie[i+1][j]=='.' && fie[i+1][j+1]=='.'){
            fie[i][j] = fie[i+1][j] = fie[i+1][j+1] = '#';
            ret += solve(h, w, fie);
            fie[i][j] = fie[i+1][j] = fie[i+1][j+1] = '.';
        }
        if(i<h-1 && j<w-1 && fie[i][j]=='.' && fie[i+1][j]=='.' && fie[i][j+1]=='.'){
            fie[i][j] = fie[i+1][j] = fie[i][j+1] = '#';
            ret += solve(h, w, fie);
            fie[i][j] = fie[i+1][j] = fie[i][j+1] = '.';
        }
        if(i<h-1 && j<w-1 && fie[i][j]=='.' && fie[i][j+1]=='.' && fie[i+1][j+1]=='.'){
            fie[i][j] = fie[i][j+1] = fie[i+1][j+1] = '#';
            ret += solve(h, w, fie);
            fie[i][j] = fie[i][j+1] = fie[i+1][j+1] = '.';
        }
        if(i<h-1 && j>0 && fie[i][j]=='.' && fie[i+1][j-1]=='.' && fie[i+1][j]=='.'){
            fie[i][j] = fie[i+1][j-1] = fie[i+1][j] = '#';
            ret += solve(h, w, fie);
            fie[i][j] = fie[i+1][j-1] = fie[i+1][j] = '.';
        }
        return ret;
    }
    return ret;
}

int main(){
    int h, w;
    char fie[10][10];
    while(true){
        scanf("%d %d", &h, &w);
        if(h==0 && w==0) break;
        REP(i, 0, h) scanf("%s", fie[i]);
        printf("%d\n", solve(h, w, fie));
    }
    return 0;
}


