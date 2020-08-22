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
        int h, w, m;
        scanf("%d %d %d", &h, &w, &m);

        std::map<P, int> mp;
        ll rows[h] = {}, cols[w] = {};
        REP(i, 0, m){
                int x, y;
                scanf("%d %d", &x, &y);
                x--, y--;
                mp[P(x, y)]++;
                rows[x]++;
                cols[y]++;
        }

        ll rmax = 0, cmax = 0;
        REP(i, 0, h) rmax = std::max(rmax, rows[i]);
        REP(i, 0, w) cmax = std::max(cmax, cols[i]);

        V rm, cm;
        REP(i, 0, h) if(rows[i]==rmax) rm.push_back(i);
        REP(i, 0, w) if(cols[i]==cmax) cm.push_back(i);

        for(ll i: rm){
                for(ll j: cm){
                        if(mp[P(i, j)]) continue;
                        printf("%ld
", rmax+cmax);
                        return 0;
                }
        }
        printf("%ld
", rmax+cmax-1);
        return 0;
}
