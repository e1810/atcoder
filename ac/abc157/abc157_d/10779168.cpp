
#include<bits/stdc++.h>
using ll = int_fast64_t;

struct UnionFind {
  std::vector<ll> data;

  UnionFind(ll sz) {
    data.assign(sz, -1);
  }

  bool unite(ll x, ll y) {
    x = find(x), y = find(y);
    if(x == y) return (false);
    if(data[x] > data[y]) std::swap(x, y);
    data[x] += data[y];
    data[y] = x;
    return (true);
  }

  ll find(ll k) {
    if(data[k] < 0) return (k);
    return (data[k] = find(data[k]));
  }

  ll size(ll k) {
    return (-data[find(k)]);
  }
};

int main(){
        ll n, m, k;
        scanf("%ld %ld %ld", &n, &m, &k);

        std::vector<ll> frndcnt(n, 0);
        UnionFind tree(n);
        for(ll i=0; i<m; i++){
                ll a, b;
                scanf("%ld %ld", &a, &b);
                frndcnt[a-1]++;
                frndcnt[b-1]++;
                tree.unite(a-1, b-1);
        }

        std::vector<ll> ans(n);
        for(ll i=0; i<n; i++) ans[i] = tree.size(i) - frndcnt[i] - 1;

        for(ll i=0; i<k; i++){
                ll c, d;
                scanf("%ld %ld", &c, &d);
                if(tree.find(c-1)==tree.find(d-1)){
                        ans[c-1]--;
                        ans[d-1]--;
                }
        }

        for(ll i=0; i<n; i++) printf("%ld ", ans[i]);
        puts("");
        return 0;
}
