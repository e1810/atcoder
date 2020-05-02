
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using PP = pair<pair<ll,ll>,ll>;

int main(){
        ll h, w; scanf("%lld %lld", &h, &w);
        vector<vector<ll>> fig(h+2, vector<ll>(w+2, 0));
        for(ll j=0; j<w+2; j++){
                fig[0][j] = 1;
                fig[h+1][j] = 1;
        }
        for(ll i=0; i<h+2; i++){
                fig[i][0] = 1;
                fig[i][w+1] = 1;
        }
        for(ll i=1; i<h+1; i++){
                string s; cin >> s;
                for(ll j=1; j<w+1; j++) fig[i][j] = (s[j-1]=='#');
        }

        ll ans = 0;
        ll dx[] = {0, 1, 0, -1}, dy[] = {1, 0, -1, 0};
        for(ll i=1; i<=h; i++){
                for(ll j=1; j<=w; j++){
                        vector<vector<ll>> used(fig);
                        vector<vector<ll>> dist(h+2, vector<ll>(w+2, 1e11));

                        queue<PP> que;
                        que.push({{i, j}, 0});
                        while(!que.empty()){
                                PP pp = que.front(); que.pop();
                                ll ti = pp.first.first, tj = pp.first.second, dis = pp.second;
                                if(used[ti][tj]) continue;
                                used[ti][tj] = 1;
                                ans = max(ans, dis);
                                for(ll d=0; d<4; d++){
                                        ll ni = ti + dx[d], nj = tj + dy[d];
                                        if(fig[ni][nj]!='#' and !used[ni][nj]){
                                                que.push({{ni, nj}, dis+1});
                                        }
                                }
                        }

                }
        }
        printf("%lld
", ans);
        return 0;
}
