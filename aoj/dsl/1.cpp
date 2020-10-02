#include<bits/stdc++.h>

struct UnionFind {
	std::vector<int> data;
	UnionFind(int n): data(n, -1) {}
	int root(int x){
		if(data[x]<0) return x;
		else return data[x] = root(data[x]);
	}
	bool same(int x, int y){
		return root(x)==root(y);
	}
	void unite(int x, int y){
		x = root(x), y = root(y);
		if(x==y) return;
		data[x] += data[y];
		data[y] = x;
	}
};


int main(){
	int n, q;
	scanf("%d %d", &n, &q);
	UnionFind uf(n);
	while(q--){
		int t, x, y;
		scanf("%d %d %d", &t, &x, &y);
		if(t==0) uf.unite(x, y);
		else printf("%d\n", uf.same(x, y));
	}
	return 0;
}
