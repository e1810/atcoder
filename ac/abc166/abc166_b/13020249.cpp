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
        int n, k;
        scanf("%d %d", &n, &k);
        V ok(n, 0);
        rep(i, 0, k){
                int d;
                scanf("%d", &d);
                rep(j, 0, d){
                        int tmp;
                        scanf("%d", &tmp);
                        ok[tmp-1]++;
                }
        }
        int ans = 0;
        rep(i, 0, n) ans += (ok[i]==0);
        printf("%d
", ans);
        return 0;
}
