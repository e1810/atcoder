#pragma target("avx")
#pragma optimize("O3")
#include<bits/stdc++.h>
using ll = int_fast64_t;
using P = std::pair<ll,ll>;
using PP = std::pair<ll,P>;
using V = std::vector<ll>;
template<typename T> using pq = std::priority_queue<T>;
template<typename T> using rpq = std::priority_queue<T, std::vector<T>, std::greater<T>>;

#define REP(i,b,e) for(ll i=b; i<e; i++)
#define ALL(vec) vec.begin(),vec.end()
#define PRINT(vec) printf("[ ");for(auto &i:vec)printf("%ld ",i);puts("]");
#define SCAN(vec) for(auto &i:vec)scanf("%ld",&i)
#define fi first
#define se second

const int MOD = 1e9+7;
const ll INF = 1e18;
int dx[] = {0, 1, 0, -1, 1, 1, -1, -1}, dy[] = {1, 0, -1, 0, 1, -1, -1, 1};

int main(){
        int h, w, k;
        scanf("%d %d %d", &h, &w, &k);
        char fie[h][w+1];
        REP(i, 0, h) scanf("%s", fie[i]);

        int ans = 0;
        REP(I, 0, 1<<h) REP(J, 0, 1<<w){
                int cnt = 0;
                REP(i, 0, h) REP(j, 0, w){
                        if((I>>i)&1 || (J>>j)&1) continue;
                        if(fie[i][j]=='#') cnt++;
                }
                if(cnt==k) ans++;
        }
        printf("%d
", ans);
        return 0;
}
