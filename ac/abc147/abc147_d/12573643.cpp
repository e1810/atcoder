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
        ll n, zero, one;
        scanf("%ld", &n);
        V a(n);
        scan(a);
        ll w = 1, ans = 0;
        rep(i, 0, 61){
                zero = one = 0;
                for(ll& x: a){
                        if((x>>i)&1) one++;
                        else zero++;
                }
                ans = (ans + w * zero % MOD * one % MOD) % MOD;
                w = w * 2 % MOD;
        }
        printf("%ld
", ans);
        return 0;
}
