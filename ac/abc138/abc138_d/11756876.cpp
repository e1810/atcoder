
#include<bits/stdc++.h>
using ll = int_fast64_t;

int n, q;
std::vector<ll> links[200000], ans(200000, 0), used(200000, 0);

void dfs(ll st){
        used[st] = 1;
        for(ll to: links[st]){
                if(used[to]) continue;
                ans[to] += ans[st];
                dfs(to);
        }
}

int main(){
        scanf("%d %d", &n, &q);
        for(int i=0; i<n-1; i++){
                ll a, b;
                scanf("%ld %ld", &a, &b);
                links[a-1].push_back(b-1);
                links[b-1].push_back(a-1);
        }

        for(int i=0; i<q; i++){
                ll p, x;
                scanf("%ld %ld", &p, &x);
                ans[p-1] += x;
        }

        dfs(0);
        for(int i=0; i<n; i++) printf("%ld ", ans[i]);
        puts("");
        return 0;
}
