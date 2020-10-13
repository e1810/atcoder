#include<bits/stdc++.h>
#define REP(i,b,e) for(int i=(b);i<(e);i++)

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
	REP(i, 0, m){
		int a, b;
		scanf("%d %d", &a, &b);
		a--, b--;
		uf.unite(a, b);
	}

	int ans = 0;
	REP(i, 0, n){
		if(uf.data[i]<0){
			ans = std::max(ans, -uf.data[i]);
		}
	}
	printf("%d\n", ans);
	return 0;
}


