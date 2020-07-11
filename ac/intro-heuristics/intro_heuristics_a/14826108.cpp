#pragma target("avx")
#pragma optimize("O3")
#include<bits/stdc++.h>
using ll = int_fast64_t;

#define REP(i,b,e) for(ll i=b; i<e; i++)
#define ALL(vec) vec.begin(),vec.end()

int d;
ll c[26], s[370][26], last[370][26], t[370];


ll calc(ll dl){
        ll score = 0;
        REP(i, 1, dl+1){
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
        REP(j, 0, 26) last[0][j] = 0;

        REP(i, 1, d+1){
                ll score = calc(i);
                REP(j, 0, 26){
                        ll prev = t[i];
                        t[i] = j+1;
                        ll newscore = calc(i);
                        if(newscore > score) score = newscore;
                        else t[i] = prev;
                }
        }

        REP(i, 1, d+1) printf("%ld
", t[i]);
        return 0;
}
