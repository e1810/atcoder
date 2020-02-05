
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll,ll>;

int main(){
        ll n;
        scanf("%lld", &n);
        vector<vector<P>> links(n, vector<P>(0));
        for(ll i=0; i<n-1; i++){
                ll a, b, c;
                scanf("%lld %lld %lld", &a, &b, &c);
                links[a-1].push_back(P(b-1, c));
                links[b-1].push_back(P(a-1, c));
        }


        ll q, k;
        scanf("%lld %lld", &q, &k);
        k--;

        vector<ll> dist(n, 1e18);
        dist[k] = 0;
        priority_queue<P, vector<P>, greater<P>> que;
        que.emplace(dist[k], k);

        while(!que.empty()){
                ll cost, idx;
                tie(cost, idx) = que.top();
                que.pop();
                if(dist[idx]<cost) continue;

                for(auto e: links[idx]){
                        if(dist[e.first]<=cost+e.second) continue;
                        dist[e.first] = cost+e.second;
                        que.emplace(dist[e.first], e.first);
                }
        }


        for(ll i=0; i<q; i++){
                ll x, y;
                scanf("%lld %lld", &x, &y);
                printf("%lld
", dist[x-1]+dist[y-1]);
        }
        return 0;
}
