#include<bits/stdc++.h>
using ll = int_fast64_t;
using P = std::pair<ll,ll>;
using PP = std::pair<ll,P>;

#define REP(i,b,e) for(int i=b; i<e; i++)
#define PRINT(vec) {printf("[ ");for(auto &i:vec)printf("%ld ",i);puts("]");}
#define fi first
#define se second

const int MOD = 1e9+7;
int dx[] = {0, 1, 0, -1, 1, 1, -1, -1}, dy[] = {1, 0, -1, 0, 1, -1, -1, 1};

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

int main(){
	int n, m;
	scanf("%d %d", &n, &m);
	UnionFind uf(n);
	while(m--){
		int a, b;
		scanf("%d %d", &a, &b);
		uf.unite(a-1, b-1);
	}
	int cnt = 0;
	REP(i, 0, n) if(uf.data[i]<0) cnt++;
	printf("%d
", cnt-1);
	return 0;
}
