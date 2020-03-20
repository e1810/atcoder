
#include<bits/stdc++.h>
using ll = int_fast64_t;
using P = std::pair<ll,ll>;

int main(){
        ll n;
        scanf("%ld", &n);
        std::vector<P> links[n];
        for(ll i=0; i<n-1; i++){
                ll u, v, w;
                scanf("%ld %ld %ld", &u, &v, &w);
                links[u-1].push_back(P(v-1, w));
                links[v-1].push_back(P(u-1, w));
        }

        std::vector<bool> used(n, 0), ans(n);
        std::queue<P> que;
        que.push(P(0, 0));
        while(!que.empty()){
                ll from, dis;
                std::tie(from, dis) = que.front();
                que.pop();
                ans[from] = dis%2;
                used[from] = 1;
                for(P p: links[from]){
                        if(!used[p.first]) que.push(P(p.first, p.second+dis));
                }

        }

        for(bool i: ans) printf("%d
", i);
        return 0;
}
