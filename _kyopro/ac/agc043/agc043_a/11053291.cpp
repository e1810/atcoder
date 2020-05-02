
#include<bits/stdc++.h>
using namespace std;
using P = pair<int,int>;

int main(){
        int h, w;
        scanf("%d %d", &h, &w);
        vector<vector<int>> fie(h+1, vector<int>(w+1, 1e9));
        for(int i=1; i<=h; i++){
                char s[w+1];
                scanf("%s", s);
                for(int j=0; j<w; j++) fie[i][j+1] = (s[j]=='#');
        }

        vector<vector<P>> dp(h+1, vector<P>(w+1, P(1e9, 1)));
        dp[1][1] = P(0, fie[1][1]);
        for(int i=1; i<=h; i++){
                for(int j=1; j<=w; j++){
                        P a, b;
                        if(fie[i][j]){
                                a = P(dp[i-1][j].first, 1);
                                b = P(dp[i][j-1].first, 1);
                        }else{
                                a = P(dp[i-1][j].first+dp[i-1][j].second, 0);
                                b = P(dp[i][j-1].first+dp[i][j-1].second, 0);
                        }
                        dp[i][j] = min({dp[i][j], a, b});
                }
        }
        printf("%d
", dp[h][w].first+dp[h][w].second);
        return 0;
}
