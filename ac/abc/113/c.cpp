#include<bits/stdc++.h>
using P = std::pair<int,int>;

int main(){
	int n, m;
	scanf("%d %d", &n, &m);
	std::vector<P> city[n];
	for(int i=0; i<m; i++){
		int p, y;
		scanf("%d %d", &p, &y);
		city[p-1].emplace_back(i, y);
	}

	std::vector<std::pair<int,P>> ls(0);
	auto cmp = [](P a, P b){return a.second<b.second;};
	for(int i=0; i<n; i++){
		std::sort(city[i].begin(), city[i].end(), cmp);
		for(int j=0; j<city[i].size(); j++) ls.emplace_back(city[i][j].first, P(i+1, j+1));
	}

	std::sort(ls.begin(), ls.end());
	for(auto p: ls){
		int r, y;
		std::tie(r, y) = p.second;
		printf("%06d%06d\n", r, y);
	}
	return 0;
}
		
	
