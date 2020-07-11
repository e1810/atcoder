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
        int n;
        scanf("%d", &n);
        std::map<std::string,int> mp;
        mp["AC"] = mp["WA"] = mp["TLE"] = mp["RE"] = 0;
        while(n--){
                std::string s;
                std::cin >> s;
                mp[s]++;
        }
        printf("AC x %d
", mp["AC"]);
        printf("WA x %d
", mp["WA"]);
        printf("TLE x %d
", mp["TLE"]);
        printf("RE x %d
", mp["RE"]);

        return 0;
}
