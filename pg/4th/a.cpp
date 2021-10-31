#include<bits/stdc++.h>
#define REP(i,b,e) for(int i=b;i<e;i++)

int main(){
    int x;
    scanf("%d", &x);
    double p = x * 0.01, ans = 0;
    REP(i, 0, 1<<7){
        double pos = 1;
        int won = 0;
        REP(j, 0, 7){
            if((i>>j)&1){
                won++;
                pos *= p;
            }else pos *= (1-p);
        }
        if(won >= 4) ans += pos;
    }
    ans *= 100;
    printf("%.10lf\n", ans);
    return 0;
}
