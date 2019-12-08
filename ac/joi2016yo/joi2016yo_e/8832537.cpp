
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n, m, k, s, p, q;
vector<ll> zombee(100000), prices(100000);
vector<vector<ll> > links(100000, vector<ll>(0));


int main(){
        cin>>n>>m>>k>>s>>p>>q;
        for(ll i=0; i<k; i++) scanf("%lld", &zombee[i]);
        for(ll i=0; i<m; i++){
                ll tm, po;
                scanf("%lld %lld", &tm, &po);
                links[tm-1].push_back(po-1);
                links[po-1].push_back(tm-1);
        }
        for(int i=0; i<k; i++) links[n].push_back(zombee[i]-1);
        //for(int i=0; i<=n; i++){for(ll j: links[i])printf(" %lld", j);puts("");}

        for(int i=0; i<=n; i++) prices[i]=p;
        queue<ll> qu;
        qu.push(n);
        for(int i=0; i<s+2; i++){
                if(qu.empty())break;
                for(int j=qu.size()-1; j>=0; j--){
                        ll tmp = qu.front();qu.pop();
                        if(prices[tmp]==q)continue;
                        prices[tmp] = q;
                        for(ll li: links[tmp]){
                                qu.push(li);
                        }
                }
        }
        for(int i=0; i<k; i++) prices[zombee[i]-1] = 1e15;
        prices[n-1] = 0;
        //for(int i=0; i<n; i++) printf(" %lld", prices[i]);puts("");


        priority_queue<ll, vector<ll>, greater<ll> > que;
        que.push(0);
        vector<ll> dist(n);
        fill(dist.begin(), dist.end(), 1e15);
        dist[0] = 0;
        while(!que.empty()){
                ll v = que.top();que.pop();
                for(ll ver: links[v]){
                        if(dist[ver] <= dist[v] + prices[ver]) continue;
                        dist[ver] = dist[v] + prices[ver];
                        que.push(ver);
                }
        }
        //for(int i=0; i<n; i++) printf("%lld
", dist[i]);
        printf("%lld
", dist[n-1]);

        return 0;
}
