#include<bits/stdc++.h>
using P = std::pair<int,int>;

int n, k;
std::vector<int> used(200100, 0), dist(200100, 2e9), links[200100];


int dfs(int from, int d){
	int ret = 1;
	used[from] = true;
	for(int to: links[from]){
		if(used[to]) continue;
		ret += dfs(to, d+1);
	}
	dist[from] = d - ret + 1;
	return ret;
}
	

int main(){
	scanf("%d %d", &n, &k);
	for(int i=0; i<n-1; i++){
		int a, b;
		scanf("%d %d", &a, &b);
		links[a-1].push_back(b-1);
		links[b-1].push_back(a-1);
	}
	
	dfs(0, 0);

	std::sort(dist.begin(), dist.end());
	long long ans = 0;
	for(int i=n-k; i<n; i++) ans += dist[i];
	printf("%lld\n", ans);
}
