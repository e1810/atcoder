#include<bits/stdc++.h>
using ll = int_fast64_t;
using P = std::pair<ll,ll>;
using PP = std::pair<ll,P>;

#define REP(i,b,e) for(int i=b; i<e; i++)
#define PRINT(vec) {printf("[ ");for(auto &i:vec)printf("%ld ",i);puts("]");}
#define fi first
#define se second

const int MOD = 1e9+7;
int dx[] = {0, 1, 0, -1, 1, 1, -1, -1}, dy[] = {1, 0, -1, 0, 1, -1, -1, 1};

int main(){
    ll n, k;
    scanf("%ld %ld", &n, &k);
    ll dist[n][n];
    REP(i, 0, n) REP(j, 0, n) scanf("%ld", &dist[i][j]);

    ll ans = 0;
    ll a[n-1];
    REP(i, 0, n-1) a[i] = i+1;
    do{
        ll tmp = dist[0][a[0]];
        REP(i, 1, n-1){
            tmp += dist[a[i-1]][a[i]];
        }
        tmp += dist[a[n-2]][0];
        if(tmp==k) ans++;
    }while(std::next_permutation(a, a+n-1));

    printf("%ld
", ans);
    return 0;
}
