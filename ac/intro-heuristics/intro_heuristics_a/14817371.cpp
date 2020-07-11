#pragma target("avx")
#pragma optimize("O3")
#include<bits/stdc++.h>
using ll = int_fast64_t;

#define REP(i,b,e) for(ll i=b; i<e; i++)
#define ALL(vec) vec.begin(),vec.end()

const int MOD = 1e9+7;
const ll INF = 1e18;
int dx[] = {0, 1, 0, -1, 1, 1, -1, -1}, dy[] = {1, 0, -1, 0, 1, -1, -1, 1};

int d;
ll c[26], s[370][26], last[370][26], t[370];


ll calc(){
        ll score = 0;
        REP(i, 1, d+1){
                REP(j, 0, 26){
                        if(j==t[i]-1){
                                score += s[i][j];
                                last[i][j] = i;
                        }else last[i][j] = last[i-1][j];
                        score -= c[j] * (i - last[i][j]);
                }
        }
        return score;
};

int main(){
        scanf("%d", &d);
        REP(i, 0, 26) scanf("%ld", &c[i]);
        REP(i, 1, d+1) REP(j, 0, 26) scanf("%ld", &s[i][j]);
        REP(i, 1, d+1) t[i] = 0;
        REP(i, 0, 1+d) REP(j, 0, 26) last[i][j] = 0;

        ll score = calc();

        ll limit = 0;
        while(true){
                REP(i, 1, d+1) REP(j, 0, 26) {
                        ll prev = t[i];
                        t[i] = j;
                        ll newscore = calc();
                        if(newscore > score) score = newscore;
                        else t[i] = prev;
                        if(limit++ > 200000){
                                REP(i, 1, d+1) printf("%ld
", t[i]);
                                return 0;
                        }
                }
        }
        return 0;
}
