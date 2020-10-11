#include<bits/stdc++.h>
#define REP(i,b,e) for(int i=b; i<e; i++)

int main(){
    int a[4];
    REP(i, 0, 4) scanf("%d", &a[i]);
    bool ok = false;
    REP(i, 0, 1<<4){
        int e=0, n=0;
        REP(j, 0, 4){
            if((i>>j)&1) e += a[j];
            else n += a[j];
        }
        if(e==n) ok = true;
    }
    if(ok) puts("Yes");
    else puts("No");
    return 0;
}
