#include<bits/stdc++.h>
#define REP(i,b,e) for(int i=b; i<e; i++)

struct Ans {
    int y, x, c;
    Ans(int y, int x, int c): y(y), x(x), c(c) {}
};

int main(){
    int id, n, k;
    scanf("%d %d %d", &id, &n, &k);
    char fie[n][n+1];
    REP(i, 0, n) scanf("%s", fie[i]);

    int cnt[9] = {};
    REP(i, 0, n) REP(j, 0, n) cnt[fie[i][j]-'1']++;
    char max = '1';
    REP(i, 0, 9) if(cnt[max-'1']<cnt[i]) max = i+'1';

    std::vector<Ans> ques;
    REP(i, 0, n) REP(j, 0, n) {
        if(fie[i][j]!=max) ques.emplace_back(i+1, j+1, max-'0');
    }
    printf("%ld
", ques.size());
    for(auto [y, x, c]: ques) printf("%d %d %d
", y, x, c);
    return 0;
}
