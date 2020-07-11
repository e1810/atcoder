#pragma target("avx")
#pragma optimize("O3")
#include<bits/stdc++.h>
using ll = int_fast64_t;

#define REP(i,b,e) for(ll i=b; i<e; i++)

struct UnionFind {
        using ll = int_fast64_t;
        std::vector<ll> data;

        UnionFind(ll size): data(size){
                for(ll i=0; i<size; i++) data[i] = -1;
        }

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
	UnionFind uf(n);
	REP(i, 0, m){
		int a, b;
		scanf("%d %d", &a, &b);
		uf.unite(a-1, b-1);
	}
	int ans = -1;
	for(ll x: uf.data){
		if(x<0) ans++;
	}
	printf("%d
", ans);
	return 0;
}
