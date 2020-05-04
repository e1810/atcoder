#pragma target("avx")
#include<bits/stdc++.h>
using ll = int_fast64_t;
using P = std::pair<ll,ll>;
using V = std::vector<ll>;
template<typename T> using pq = std::priority_queue<T>;
template<typename T> using rpq = std::priority_queue<T, std::vector<T>, std::greater<T>>;

#define rep(i,b,e) for(ll i=b; i<e; i++)
#define be(vec) vec.begin(),vec.end()
#define print(vec) printf("[ ");for(auto &i:vec)printf("%ld ",i);puts("]");
#define scan(vec) for(auto &i:vec)scanf("%ld",&i)
#define fi first
#define se second

const int MOD = 1e9+7;
const ll INF = 1e18;
int dx[] = {0, 1, 0, -1, 1, 1, -1, -1}, dy[] = {1, 0, -1, 0, 1, -1, -1, 1};

int main(){
        int n, m;
        scanf("%d %d", &n, &m);

        std::vector<std::vector<P>> s(n);
        rep(i, 0, m){
                int p, y;
                scanf("%d %d", &p, &y);
                s[p-1].emplace_back(y, i);
        }

        rep(i, 0, n) std::sort(be(s[i]), [](P x, P y){return x.fi < y.fi;});
        std::vector<V> ans;
        rep(i, 0, n){
                rep(j, 0, s[i].size()){
                         ans.push_back({i, j, s[i][j].se});
                }
        }
        std::sort(be(ans), [](V x, V y){return x[2] < y[2];});
        for(V vec: ans){
                printf("%06ld%06ld
", vec[0]+1, vec[1]+1);
        }
        return 0;
}
