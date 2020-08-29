#pragma target("avx")
#pragma optimize("O3")
#include<bits/stdc++.h>
using ll = int_fast64_t;
using P = std::pair<ll,ll>;

#define REP(i,b,e) for(ll i=b; i<e; i++)

const int MOD = 1e9+7;
const ll INF = 1e18;
int dx[] = {0, 1, 0, -1, 1, 1, -1, -1}, dy[] = {1, 0, -1, 0, 1, -1, -1, 1};

struct UnionFind {
	std::vector<int> data;

	UnionFind(int sz) {
		data.assign(sz, -1);
	}

	bool unite(int x, int y) {
		x = find(x), y = find(y);
		if(x == y) return (false);
		if(data[x] > data[y]) std::swap(x, y);
		data[x] += data[y];
		data[y] = x;
		return (true);
	}

	int find(int k) {
		if(data[k] < 0) return (k);
		return (data[k] = find(data[k]));
	}

	int size(int k) {
		return (-data[find(k)]);
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

	int ans = 0;
	REP(i, 0, n){
		ans = std::max(ans, -uf.data[i]);
	}
	printf("%d
", ans);
	return 0;
}
