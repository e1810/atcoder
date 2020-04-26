
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

ll modpow(ll a, ll p){
        ll ret = 1;
        while(p){
                if(p&1) ret = ret * a % MOD;
                a = a * a % MOD;
                p >>= 1;
        }
        return ret;
}

int main(){
        std::string s;
        std::cin >> s;
        V a(s.size()+1, 0);
        ll dig = 1;
        for(ll i=s.size()-1; i>=0; i--){
                a[i] = (a[i+1] + (s[i]-'0')*dig) % 2019;
                dig = dig * 10 % 2019;
        }
        std::map<ll,ll> mp;
        for(ll x: a) mp[x]++;
        ll ans = 0;
        for(auto [v, cnt]: mp) ans += cnt*(cnt-1)/2;
        printf("%ld
", ans);
        return 0;
}
