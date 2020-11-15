#pragma GCC target("avx2")
#pragma GCC optimize("O3")
#include<bits/stdc++.h>
using ll = int_fast64_t;
#define REP(i,b,e) for(int i=b; i<e; i++)

struct UnionFind {
    std::vector<int> data;
	std::vector<std::unordered_map<int,int>> mps;

    UnionFind(int n=1e5): data(n, -1), mps(n) {}

    int root(int x){
        if(data[x]<0) return x;
        else return data[x] = root(data[x]);
    }

    void unite(int x, int y){
        x = root(x);
        y = root(y);
        if(x==y) return;
		if(mps[x].size()<mps[y].size()) std::swap(x, y);
		for(auto [k,c]: mps[y]) mps[x][k] += c;
		mps[y].clear();
        data[x] += data[y];
        data[y] = x;
    }

	int query(int x, int c){
		x = root(x);
		if(mps[x].count(c)) return mps[x][c];
		else return 0;
	}
};

int main(){
	int n, q;
	scanf("%d %d", &n, &q);
	int cls[n];
	REP(i, 0, n) scanf("%d", &cls[i]);

	UnionFind uf(n);
	REP(i, 0, n) uf.mps[i][cls[i]]++;

	while(q--){
		int t, x, y;
		scanf("%d %d %d", &t, &x, &y);
		if(t==1) uf.unite(x-1, y-1);
		else printf("%d
", uf.query(x-1, y));
	}
	return 0;
}
