#include<bits/stdc++.h>
using ll = int_fast64_t;

#define REP(i,b,e) for(int i=b; i<e; i++)
#define PRINT(vec) {printf("[ ");for(auto &i:vec)printf("%ld ",i);puts("]");}
#define fi first
#define se second

struct UnionFind {
    std::vector<int> data;
	std::vector<ll> sum;
    UnionFind(int n=1e5): data(n, -1), sum(n, 0) {}

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
		sum[x] += sum[y];
        data[x] += data[y];
        data[y] = x;
    }
};

int main(){
	int n, m;
	scanf("%d %d", &n, &m);
	UnionFind a(n), b(n);
	REP(i, 0, n) scanf("%ld", &a.sum[i]);
	REP(i, 0, n) scanf("%ld", &b.sum[i]);
	
	REP(i, 0, m){
		int c, d;
		scanf("%d %d", &c, &d);
		a.unite(c-1, d-1);
		b.unite(c-1, d-1);
	}

	bool ok = true;
	REP(i, 0, n){
		if(a.root(i)==i){
			if(a.sum[i] != b.sum[i]) ok = false;
		}
	}
	
	if(ok) puts("Yes");
	else puts("No");
	return 0;
}
