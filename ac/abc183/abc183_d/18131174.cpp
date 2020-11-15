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
    ll n, w;
    scanf("%ld %ld", &n, &w);

    ll a[200100] = {};
    while(n--){
        ll s, t, p;
        scanf("%ld %ld %ld", &s, &t, &p);
        a[s] += p;
        a[t] -= p;
    }

    REP(i, 1, 200100) a[i] += a[i-1];
    bool ok = true;
    REP(i, 0, 200100){
        if(a[i]>w) ok = false;
    }

    if(ok) puts("Yes");
    else puts("No");
    return 0;
}
