#include<bits/stdc++.h>
using namespace std;
using ll = long long;
struct P {
        ll x, y, bs, dist;
};

int main(){
        ll h, w; scanf("%lld %lld", &h, &w);
        vector<vector<ll>> fig(h, vector<ll>(w));
        for(ll i=0; i<h; i++){
                string s; cin>>s;
                for(ll j=0; j<w; j++) fig[i][j] = (s[j]=='k');
        }

        ll dx[] = {0, -1};
        ll dy[] = {-1, 0};

        vector<vector<ll>> ans(h, vector<ll>(w, 1e11));

        queue<P> que;
        P p = {0, 0, -1, 0};
        que.push(p);
        while(!que.empty()){
                p = que.front(); que.pop();
                if(fig[p.x][p.y]) p.dist += max(0ll, p.dist-p.bs*p.bs);
                if(ans[p.x][p.y]<=p.dist) continue;
                ans[p.x][p.y] = p.dist;
                for(ll i=0; i<2; i++){
                        ll tx = p.x-dx[i], ty = p.y-dy[i];
                        if(0<=tx && tx<h and 0<=ty && ty<w){
                                P np = {tx, ty, p.bs+fig[tx][ty], p.dist+1};
                                que.push(np);
                        }
                }
        }

        printf("%lld\n", ans[h-1][w-1]);
        return 0;
}
