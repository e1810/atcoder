
#include<bits/stdc++.h>
using ll = int_fast64_t;

struct UnionFind {
        std::vector<ll> data;

        UnionFind(ll size): data(size, -1){};

        ll root(ll x){
                if(data[x]<0) return x;
                return data[x] = root(data[x]);
        }

        void unite(ll x, ll y){
                x = root(x);
                y = root(y);
                if(x==y) return;

                if(data[x]<data[y]){
                        data[x] += data[y];
                        data[y] = x;
                }else{
                        data[y] += data[x];
                        data[x] = y;
                }
        }

        bool find(ll x, ll y){
                return root(x)==root(y);
        }
};


int main(){
        int n, m;
        scanf("%d %d", &n, &m);

        UnionFind tree(n);
        for(int i=0; i<m; i++){
                int x, y, z;
                scanf("%d %d %d", &x, &y, &z);
                tree.unite(x-1, y-1);
        }

        int ans = 0;
        for(auto i: tree.data) ans += (i<0);
        printf("%d
", ans);
        return 0;
}
