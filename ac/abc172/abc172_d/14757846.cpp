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
        ll n;
        scanf("%ld", &n);

        V spf(n+1, 0);
        REP(i, 0, n+1) spf[i] = i;
        for(ll i=2; i*i<=n; i++) if(spf[i]==i) {
                for(ll j=i+i; j<=n; j+=i) if(spf[j]==j) {
                        spf[j] = i;
                }
        }

        ll ans = 0;
        REP(i, 1, n+1){
                ll x = i, prev = 0, tmp = 0, cnt = 1;
                while(x!=1){
                        if(prev==spf[x]) tmp++;
                        else {
                                cnt *= tmp + 1;
                                tmp = 1;
                        }
                        prev = spf[x];
                        x /= spf[x];
                }
                cnt *= tmp + 1;
                ans += i * cnt;
        }
        printf("%ld
", ans);
        return 0;
}
