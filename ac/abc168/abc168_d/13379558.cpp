#include<bits/stdc++.h>
using ll = int_fast64_t;
using P = std::pair<ll,ll>;
using V = std::vector<ll>;
#define REP(i,b,e) for(ll i=b; i<e; i++)

int main(){
        ll n, m;
        scanf("%ld %ld", &n, &m);
        V links[n];
        REP(i, 0, m){
                ll a, b;
                scanf("%ld %ld", &a, &b);
                links[a-1].push_back(b-1);
                links[b-1].push_back(a-1);
        }

        V ans(n, -1);
        std::queue<P> que;
        que.emplace(-1, 0);
        while(!que.empty()){
                auto [from, now] = que.front();
                que.pop();
                if(ans[now]>=0) continue;
                ans[now] = from + 1;
                for(ll to: links[now]){
                        if(ans[to]>=0) continue;
                        que.emplace(now, to);
                }
        }
        puts("Yes");
        REP(i, 1, n) printf("%ld
", ans[i]);
        return 0;
}
