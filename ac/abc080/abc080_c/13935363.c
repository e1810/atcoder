#include<stdio.h>
#define REP(i,b,e) for(int i=b; i<e; i++)

int main(){
        int n;
        scanf("%d", &n);
        int f[n];
        REP(i, 0, n){
                f[i] = 0;
                REP(j, 0, 10){
                        getchar();
                        f[i] |= (getchar()%2)<<j;
                }
        }

        int p[n][11];
        REP(i, 0, n) REP(j, 0, 11) scanf("%d", &p[i][j]);

        int ans = -1e9;
        REP(i, 1, 1<<10){
                int tmp = 0;
                REP(j, 0, n) {
                        int c = 0;
                        for(int a=i&f[j]; a; a>>=1) c += a&1;
                        tmp += p[j][c];
                }
                if(ans<tmp) ans = tmp;
        }
        printf("%d
", ans);
        return 0;
}
