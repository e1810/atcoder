#include<bits/stdc++.h>
using P = std::pair<int,int>;

int main(){
	int n, m;
	scanf("%d %d", &n, &m);

	std::vector<P> edges(m);
	std::vector<int> links[n];
	for(auto& [u, v]: edges){
		scanf("%d %d", &u, &v);
		links[u-1].push_back(v-1);
	}
	std::sort(edges.begin(), edges.end());

	int dp1[n] = {}, dp2[n] = {};
	dp1[0] = 1;
	for(int i=0; i<n; i++){
		for(auto to: links[i]){
			dp1[to] += dp1[i];
			dp2[to] += (dp2[i]+1)*dp1[i];
		}
	}
	for(int i=0; i<n; i++){
		printf("%d\n", dp2[i]);
	}
	return 0;
}



