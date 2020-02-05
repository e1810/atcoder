#include<bits/stdc++.h>
using namespace std;
using ll = long long;

struct UnionFind {
        std::vector<ll> parent, rank;

        UnionFind(ll size): parent(size), rank(size, 0) {
                for(ll i=0; i<size; i++) parent[i] = i;
        }

        ll root(ll x){
                if(parent[x]==x) return x;
                return parent[x]=root(parent[x]);
        }

        void unite(ll x, ll y){
                x = root(x);
                y = root(y);
                if(x==y) return;

                if(rank[x]<rank[y]) parent[x]=y;
                else{
                        parent[y] = x;
                        if(rank[x]==rank[y]) rank[x]++;
                }
        }

        bool find(ll x, ll y){
                return root(x)==root(y);
        }
};

int main(){
	ll n, q;
	scanf("%lld %lld", &n, &q);

	UnionFind tree(n);
	for(ll i=0; i<q; i++){
		ll t, a, b;
		scanf("%lld %lld %lld", &t, &a, &b);
		if(t){
			if(tree.find(a, b)) puts("Yes");
			else puts("No");
		}else tree.unite(a, b);
	}
	return 0;
}
