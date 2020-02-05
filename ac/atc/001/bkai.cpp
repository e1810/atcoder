#include<bits/stdc++.h>
#define int long long

struct UnionFind {
	std::vector<int> parent, rank;

	UnionFind(int size): parent(size), rank(size, 0) {
		for(int i=0; i<size; i++) parent[i] = i;
	}

	int root(int x){
		if(parent[x]==x) return x;
		return parent[x]=root(parent[x]);
	}

	void unite(int x, int y){
		x = root(x);
		y = root(y);
		if(x==y) return;

		if(rank[x]<rank[y]) parent[x]=y;
		else{
			parent[y] = x;
			if(rank[x]==rank[y]) rank[x]++;
		}
	}

	bool find(int x, int y){
		return root(x)==root(y);
	}
};

int main(){
	int n, q;
	scanf("%d %d", &n, &q);

	UnionFind tree(n);
	for(int i=0; i<q; i++){
		int t, a, b;
		scanf("%d %d %d", &t, &a, &b);
		a--; b--;
		if(t){
			if(tree.find(a, b)) puts("Yes");
			else puts("No");
		}else tree.unite(a, b);
	}
	return 0;
}
