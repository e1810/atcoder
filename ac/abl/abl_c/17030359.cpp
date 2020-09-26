#include<bits/stdc++.h>
#include<atcoder/dsu>
#define REP(i,b,e) for(int i=b; i<e; i++)

int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    atcoder::dsu uf(n);
    REP(i, 0, m){
        int a, b;
        scanf("%d %d", &a, &b);
        uf.merge(a-1, b-1);
    }

    int cnt = 0;
    REP(i, 0, n){
        if(uf.leader(i)==i) cnt++;
    }
    printf("%d
", cnt-1);
    return 0;
}
