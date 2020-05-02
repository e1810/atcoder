
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void minch(ll& a, ll b){
        if(a>b) a = b;
        return;
}

int main(){
        ll n, m;
        scanf("%lld %lld", &n, &m);

        ll dist[n][n];
        for(ll i=0; i<n; i++){
                for(ll j=0; j<n; j++){
                        if(i==j) dist[i][j] = 0;
                        else dist[i][j] = 1e10;
                }
        }

        for(ll i=0; i<m; i++){
                ll from, to, cost;
                scanf("%lld %lld %lld", &from, &to, &cost);
                minch(dist[from-1][to-1], cost);
                minch(dist[to-1][from-1], cost);
        }

        for(ll k=0; k<n; k++) for(ll i=0; i<n; i++) for(ll j=0; j<n; j++){
                minch(dist[i][j], dist[i][k]+dist[k][j]);
        }

        ll ans = 1e10;
        for(ll i=0; i<n; i++){
                ll tmp = 0;
                for(ll j=0; j<n; j++){
                        tmp = max(tmp, dist[i][j]);
                }
                minch(ans, tmp);
        }

        printf("%lld
", ans);
        return 0;
}
