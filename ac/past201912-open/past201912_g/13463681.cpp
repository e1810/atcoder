#pragma target("avx")
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

ll n, a[10][10];
std::vector<ll> g[3];

ll dfs(int cnt){
        if(cnt){
                ll tmp = -1e18;
                REP(i, 0, 3){
                        g[i].push_back(cnt-1);
                        tmp = std::max(tmp, dfs(cnt-1));
                        g[i].pop_back();
                }
                return tmp;

        }else{
                ll tmp = 0;
                REP(i, 0, 3){
                        REP(I, 0, g[i].size()) REP(J, I+1, g[i].size()) {
                                tmp += a[g[i][I]][g[i][J]];
                        }
                }
                return tmp;
        }
}


int main(){
        scanf("%ld", &n);
        REP(i, 0, n-1){
                REP(j, i+1, n){
                        scanf("%ld", &a[i][j]);
                        a[j][i] = a[i][j];
                }
        }
        printf("%ld
", dfs(n));
        return 0;
}
