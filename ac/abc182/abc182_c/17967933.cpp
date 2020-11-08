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
    std::string s;
    std::cin >> s;
    int n = s.size();

    int ans = n;
    REP(i, 1, 1<<n){
        int sum = 0, cnt = n;
        REP(j, 0, n){
            if((i>>j)&1){
                sum += s[j]-'0';
                cnt--;
            }
        }
        if(sum%3==0) ans = std::min(ans, cnt);
    }

    if(ans==n) puts("-1");
    else printf("%d
", ans);
    return 0;
}
