#include<bits/stdc++.h>
using ll = int_fast64_t;
using P = std::pair<ll,ll>;
using PP = std::pair<ll,P>;

#define REP(i,b,e) for(int i=b; i<e; i++)
#define PRINT(vec) {printf("[ ");for(auto &i:vec)printf("%ld ",i);puts("]");}
#define fi first
#define se second
struct UnionFind {
    std::vector<int> data;
    UnionFind(int n=1e5): data(n, -1) {}

    int root(int x){
        if(data[x]<0) return x;
        else return data[x] = root(data[x]);
    }

    bool same(int x, int y){
        return root(x)==root(y);
    }

    void unite(int x, int y){
        x = root(x);
        y = root(y);
        if(x==y) return;
        data[x] += data[y];
        data[y] = x;
    }
};

const int MOD = 998244353;

int main(){
	ll frac[60] = {1};
	REP(i, 1, 60) frac[i] = frac[i-1] * i % MOD;

	ll n, K;
	scanf("%ld %ld", &n, &K);
	ll a[n][n];
	REP(i, 0, n) REP(j, 0, n) scanf("%ld", &a[i][j]);


	UnionFind var(n);
	REP(i, 0, n) REP(j, i+1, n) {
		bool ok = true;
		REP(k, 0, n) if(a[i][k]+a[j][k]>K) ok = false;
		if(ok) var.unite(i, j);
	}

	UnionFind hor(n);
	REP(i, 0, n) REP(j, i+1, n) {
		bool ok = true;
		REP(k, 0, n) if(a[k][i]+a[k][j]>K) ok = false;
		if(ok) hor.unite(i, j);
	}

	ll ans = 1;
	REP(i, 0, n) if(var.data[i]<0) ans = ans * frac[-var.data[i]] % MOD;
	REP(i, 0, n) if(hor.data[i]<0) ans = ans * frac[-hor.data[i]] % MOD;
	printf("%ld
", ans);
	return 0;
}
